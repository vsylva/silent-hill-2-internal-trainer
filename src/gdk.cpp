#include "gdk.h"

#include <format>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "d3d12hook.h"

const std::vector<
    std::vector<CemeteryCreatureBones::CemeteryCreatureBones>>
    GDK::CEMETERY_CREATURE_BONE_LISTS = {
        std::vector<CemeteryCreatureBones::CemeteryCreatureBones> {
            CemeteryCreatureBones::Root_M,
            CemeteryCreatureBones::Spine1_M,
            CemeteryCreatureBones::Spine2_M,
            CemeteryCreatureBones::Spine3_M,
            CemeteryCreatureBones::Chest_M,
            CemeteryCreatureBones::Neck_B_M,
            CemeteryCreatureBones::Head_B_M
        },
        std::vector<CemeteryCreatureBones::CemeteryCreatureBones> {
            CemeteryCreatureBones::Chest_M,
            CemeteryCreatureBones::Scapula_L,
            CemeteryCreatureBones::Shoulder_L,
            CemeteryCreatureBones::ShoulderPart1_L,
            CemeteryCreatureBones::Elbow_L,
            CemeteryCreatureBones::ElbowPart1_L,
            CemeteryCreatureBones::Wrist_L
        },
        std::vector<CemeteryCreatureBones::CemeteryCreatureBones> {
            CemeteryCreatureBones::Chest_M,
            CemeteryCreatureBones::Scapula_R,
            CemeteryCreatureBones::Shoulder_R,
            CemeteryCreatureBones::ShoulderPart1_R,
            CemeteryCreatureBones::Elbow_R,
            CemeteryCreatureBones::ElbowPart1_R,
            CemeteryCreatureBones::Wrist_R
        },
        std::vector<CemeteryCreatureBones::CemeteryCreatureBones> {
            CemeteryCreatureBones::Root_M,
            CemeteryCreatureBones::Hip_L,
            CemeteryCreatureBones::HipPart1_L,
            CemeteryCreatureBones::Knee_L,
            CemeteryCreatureBones::KneePart1_L,
            CemeteryCreatureBones::Ankle_L,
            CemeteryCreatureBones::Toes_L
        },
        std::vector<CemeteryCreatureBones::CemeteryCreatureBones> {
            CemeteryCreatureBones::Root_M,
            CemeteryCreatureBones::Hip_R,
            CemeteryCreatureBones::HipPart1_R,
            CemeteryCreatureBones::Knee_R,
            CemeteryCreatureBones::KneePart1_R,
            CemeteryCreatureBones::Ankle_R,
            CemeteryCreatureBones::Toes_R
        }
};

bool GDK::is_rendering_box_2d = false;
bool GDK::is_rendering_box_3d = false;
bool GDK::is_rendering_bones = false;
bool GDK::is_rendering_distance = false;

#ifdef _DEBUG
bool GDK::is_rendering_bp_name = false;
bool GDK::is_rendering_socket_names = false;
bool GDK::is_rendering_socket_indices = false;
#endif

bool GDK::is_player_free_movement = false;

SDK::UWorld* World::world = nullptr;
SDK::UGameInstance* World::game_instance = nullptr;
SDK::AGameStateBase* World::game_state = nullptr;
SDK::ULocalPlayer* World::local_player = nullptr;
SDK::APlayerController* World::player_controller = nullptr;
SDK::APlayerCameraManager* World::player_camera_manager = nullptr;
SDK::ACharacter* World::player_character = nullptr;
SDK::ULevel* World::persistent_level = nullptr;
SDK::TArray<class SDK::AActor*> World::actors = {};

SDK::APawn* Pawn::pawn = nullptr;
SDK::AController* Pawn::controller = nullptr;
SDK::ACharacter* Pawn::character = nullptr;
SDK::USkeletalMeshComponent* Pawn::mesh = nullptr;
SDK::TArray<class SDK::FName> Pawn::socket_names = {};

void GDK::on_frame() {
    if (ImGui::IsKeyPressed(ImGuiKey_GraveAccent)) {
        D3d12Hook::is_showing_main_window =
            !D3d12Hook::is_showing_main_window;
    }

    if (!World::update()) {
        return;
    }

    GDK::render_game_state();

    // HACK fly
    if (ImGui::IsKeyDown(ImGuiKey_T) && GDK::is_player_free_movement) {
        GDK::player_free_movement();
    }

    GDK::on_actors();

    if (!D3d12Hook::is_showing_main_window) {
        return;
    }

    GDK::render_main_window();
#ifdef _DEBUG
    GDK::render_debug_window();
#endif

    // XXX alternative, cuz not the best choice
    // static bool IS_KEY_OPEN_MENU_DOWN = false;
    // if ((GetAsyncKeyState(0xC0) & 0x8000) != 0) {
    // if (ImGui::IsKeyPressed(ImGuiKey_Insert)) {
    //     if (!IS_KEY_OPEN_MENU_DOWN) {
    //         IS_KEY_OPEN_MENU_DOWN = true;
    //         D3d11Hook::is_showing_main_window = !D3d11Hook::is_showing_main_window;
    //     }
    // } else if (IS_KEY_OPEN_MENU_DOWN) {
    //     IS_KEY_OPEN_MENU_DOWN = false;
    // }
}

void GDK::on_actors() {
    for (const SDK::AActor* const actor : World::actors) {
        if (actor == nullptr || !actor->IsA(SDK::EClassCastFlags::Pawn)) {
            continue;
        }

        Pawn::pawn = (SDK::APawn* const)actor;

        SDK::FVector world_location_3d = Pawn::pawn->K2_GetActorLocation();
        SDK::FVector2D world_location_2d = {};
        if (!World::player_controller->ProjectWorldLocationToScreen(
                world_location_3d,
                &world_location_2d,
                false
            )) {
            continue;
        };

        if (!GDK::is_on_screen(
                {(float)world_location_2d.X, (float)world_location_2d.Y}
            )) {
            continue;
        }

        float distance =
            World::player_character->GetDistanceTo(Pawn::pawn);
        if (distance > 4095) {
            continue;
        }

        if (!Pawn::update()) {
            continue;
        }

        GDK::on_pawn();
    }
}

void GDK::on_pawn() {
    if (GDK::is_rendering_box_2d) {
        GDK::render_box_2d();
    }

    if (GDK::is_rendering_box_3d) {
        GDK::render_box_3d();
    }

    if (GDK::is_rendering_bones) {
        GDK::render_bones();
    }

    if (GDK::is_rendering_distance) {
        GDK::render_distance();
    }

#ifdef _DEBUG
    if (GDK::is_rendering_bp_name) {
        GDK::render_bp_name();
    }

    if (GDK::is_rendering_socket_names) {
        GDK::render_socket_names();
    }

    if (GDK::is_rendering_socket_indices) {
        GDK::render_socket_indices();
    }
#endif
}

void GDK::render_main_window() {
    // XXX not needed for now
    // ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0);
    // ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
    // ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0, 0, 0, 0));

    ImGui::Begin("key ~##main_window");

    ImGui::SetWindowSize(ImVec2(600.0, 400.0), ImGuiCond_FirstUseEver);
    ImGui::SetWindowPos(ImVec2(0.0, 0.0), ImGuiCond_FirstUseEver);

    if (ImGui::BeginTabBar("#tab_bar")) {
        if (ImGui::BeginTabItem("render##tab_item_0")) {
            ImGui::Checkbox(
                "box 2d##is_render_box_2d",
                &GDK::is_rendering_box_2d
            );
            ImGui::Checkbox(
                "box 3d##is_render_box_2d",
                &GDK::is_rendering_box_3d
            );

            ImGui::Checkbox(
                "bones##is_rendering_bones",
                &GDK::is_rendering_bones
            );
            ImGui::Checkbox(
                "distance##is_rendering_distance",
                &GDK::is_rendering_distance
            );

#ifdef _DEBUG
            ImGui::Checkbox(
                "bp name##is_rendering_bp_name",
                &GDK::is_rendering_bp_name
            );
            ImGui::Checkbox(
                "socket names##is_render_socket_names",
                &GDK::is_rendering_socket_names
            );
            ImGui::Checkbox(
                "socket indices##is_rendering_socket_indices",
                &GDK::is_rendering_socket_indices
            );
#endif

            ImGui::EndTabItem();
        }

        if (ImGui::BeginTabItem("others##tab_item_1")) {
            ImGui::Checkbox(
                "(key T)player_free_movement##is_player_free_movement",
                &GDK::is_player_free_movement
            );

            ImGui::EndTabItem();
        }
        ImGui::EndTabBar();
    }

    ImGui::End();
    // XXX not needed for now
    // ImGui::PopStyleColor();
    // ImGui::PopStyleVar(2);
}

void GDK::render_debug_window() {
    ImGui::Begin("Key ~\tbone list dumper##debug window");

    ImGui::SetWindowSize(ImVec2(600.0, 400.0), ImGuiCond_FirstUseEver);
    ImGui::SetWindowPos(ImVec2(600.0, 0.0), ImGuiCond_FirstUseEver);

    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

    if (ImGui::Button("player##player")) {
        // XXX maybe not necessary to check
        dump_pawn_sockets(World::player_controller->Pawn);
    }

    for (const SDK::AActor* const actor : World::actors) {
        if (actor == nullptr || !actor->IsA(SDK::EClassCastFlags::Pawn)) {
            continue;
        }

        // XXX used only once
        const SDK::APawn* const pawn = (SDK::APawn* const)actor;

        const SDK::FVector location_3d = pawn->K2_GetActorLocation();
        SDK::FVector2D location_2d = {};
        if (!World::player_controller->ProjectWorldLocationToScreen(
                location_3d,
                &location_2d,
                false
            )) {
            continue;
        }

        if (!is_on_screen({(float)location_2d.X, (float)location_2d.Y})) {
            continue;
        }

        const SDK::AController* const controller = pawn->Controller;
        if (controller == nullptr) {
            continue;
        }

        const SDK::ACharacter* const character = controller->Character;
        if (character == nullptr) {
            continue;
        }

        const SDK::USkeletalMeshComponent* const mesh = character->Mesh;
        if (mesh == nullptr) {
            continue;
        }

        std::string pawn_name = pawn->GetName();

        draw_list->AddText(
            ImVec2(location_2d.X, location_2d.Y),
            IM_COL32_WHITE,
            pawn_name.c_str()
        );

        if (ImGui::Button(pawn_name.c_str())) {
            dump_pawn_sockets(pawn);
        }
    }

    ImGui::End();
}

void GDK::render_game_state() {
    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

    draw_list->AddText(
        {0, 0},
        IM_COL32_WHITE,
        std::to_string(World::game_state->GetGameTimeSinceCreation())
            .c_str()
    );

#ifdef _DEBUG
    draw_list->AddText(
        {0, 50},
        IM_COL32_WHITE,
        World::game_state->GetFullName().c_str()
    );

    draw_list->AddText(
        {0, 100},
        IM_COL32_WHITE,
        World::persistent_level->GetFullName().c_str()
    );
#endif
}

void GDK::render_box_2d() {
    SDK::FVector pawn_world_location_3d =
                     Pawn::pawn->K2_GetActorLocation(),
                 pawn_origin_3d = {}, pawn_box_extent_3d {};

    SDK::FVector2D pawn_screen_location_2d = {},
                   pawn_screen_location_2d_head = {},
                   pawn_screen_location_2d_foot = {};

    Pawn::pawn->GetActorBounds(
        true,
        &pawn_origin_3d,
        &pawn_box_extent_3d,
        false
    );

    SDK::FVector pawn_world_extent = {35.f, 35.f, pawn_box_extent_3d.Z};

    if (!World::player_controller->ProjectWorldLocationToScreen(
            pawn_world_location_3d,
            &pawn_screen_location_2d,
            false
        )) {
        return;
    }

    if (!World::player_controller->ProjectWorldLocationToScreen(
            {pawn_world_location_3d.X,
             pawn_world_location_3d.Y,
             pawn_world_location_3d.Z + pawn_box_extent_3d.Z},
            &pawn_screen_location_2d_head,
            false
        )) {
        return;
    }

    if (!World::player_controller->ProjectWorldLocationToScreen(
            {pawn_world_location_3d.X,
             pawn_world_location_3d.Y,
             pawn_world_location_3d.Z - pawn_box_extent_3d.Z},
            &pawn_screen_location_2d_foot,
            false
        )) {
        return;
    }

    const float pawn_height =
        abs(pawn_screen_location_2d_foot.Y - pawn_screen_location_2d_head.Y
        );
    const float pawn_width = pawn_height * 0.4f;

    ImGui::GetBackgroundDrawList()->AddRect(
        {(float)pawn_screen_location_2d_head.X - (float)pawn_width * 0.5f,
         (float)pawn_screen_location_2d_head.Y},
        {(float)pawn_screen_location_2d_head.X + (float)pawn_width * 0.5f,
         (float)pawn_screen_location_2d_foot.Y},
        IM_COL32_WHITE,
        0.f,
        15,
        1.5f
    );
}

void GDK::render_box_3d() {
    SDK::FVector pawn_origin_3d = {};
    SDK::FVector pawn_box_extent_3d {};

    Pawn::pawn->GetActorBounds(
        true,
        &pawn_origin_3d,
        &pawn_box_extent_3d,
        false
    );

    pawn_box_extent_3d = {35.f, 35.f, pawn_box_extent_3d.Z};

    std::vector<SDK::FVector> world_locations_3d(8);
    std::vector<ImVec2> screen_locations_2d(8);

    world_locations_3d[0] = pawn_origin_3d - pawn_box_extent_3d;

    world_locations_3d[1] = pawn_origin_3d
        + SDK::FVector(pawn_box_extent_3d.X,
                       -pawn_box_extent_3d.Y,
                       -pawn_box_extent_3d.Z);

    world_locations_3d[2] = pawn_origin_3d
        + SDK::FVector(pawn_box_extent_3d.X,
                       pawn_box_extent_3d.Y,
                       -pawn_box_extent_3d.Z);

    world_locations_3d[3] = pawn_origin_3d
        + SDK::FVector(-pawn_box_extent_3d.X,
                       pawn_box_extent_3d.Y,
                       -pawn_box_extent_3d.Z);

    world_locations_3d[4] = world_locations_3d[0]
        + SDK::FVector(0, 0, 2 * pawn_box_extent_3d.Z);

    world_locations_3d[5] = world_locations_3d[1]
        + SDK::FVector(0, 0, 2 * pawn_box_extent_3d.Z);

    world_locations_3d[6] = world_locations_3d[2]
        + SDK::FVector(0, 0, 2 * pawn_box_extent_3d.Z);

    world_locations_3d[7] = world_locations_3d[3]
        + SDK::FVector(0, 0, 2 * pawn_box_extent_3d.Z);

    for (int i = 0; i < 8; ++i) {
        SDK::FVector2D screen_location_2d = {};

        if (!World::player_controller->ProjectWorldLocationToScreen(
                world_locations_3d[i],
                &screen_location_2d,
                false
            )) {
            continue;
        }

        screen_locations_2d[i] =
            ImVec2(screen_location_2d.X, screen_location_2d.Y);
    }

    ImDrawList* draw_list = ImGui::GetForegroundDrawList();

    for (int i = 0; i < 4; ++i) {
        draw_list->AddLine(
            screen_locations_2d[i],
            screen_locations_2d[(i + 1) % 4],
            IM_COL32_WHITE
        );

        draw_list->AddLine(
            screen_locations_2d[i + 4],
            screen_locations_2d[(i + 1) % 4 + 4],
            IM_COL32_WHITE
        );

        draw_list->AddLine(
            screen_locations_2d[i],
            screen_locations_2d[i + 4],
            IM_COL32_WHITE
        );
    }
}

void GDK::render_bones() {
    SDK::FVector previous_world_pos = {};

    SDK::FVector current_world_pos = {};

    const int socket_nums = Pawn::socket_names.Num();

    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

    for (std::vector<CemeteryCreatureBones::CemeteryCreatureBones>
             cemeteryc_reature_bone_list : CEMETERY_CREATURE_BONE_LISTS) {
        previous_world_pos = {};

        for (CemeteryCreatureBones::CemeteryCreatureBones
                 cemeteryc_reature_bone_index :
             cemeteryc_reature_bone_list) {
            // XXX  for unknown pawns, be cautious of index out of bounds issues
            if (cemeteryc_reature_bone_index >= socket_nums) {
                GDK::render_bp_name();
                return;
            }

            current_world_pos = Pawn::mesh->GetSocketLocation(
                Pawn::mesh->GetBoneName(cemeteryc_reature_bone_index)
            );

            if (previous_world_pos.IsZero()) {
                previous_world_pos = current_world_pos;
                continue;
            }

            SDK::FVector2D previous_screen_pos = {};

            SDK::FVector2D current_screen_pos = {};

            if (!World::player_controller->ProjectWorldLocationToScreen(
                    previous_world_pos,
                    &previous_screen_pos,
                    false
                )) {
                continue;
            }

            if (!World::player_controller->ProjectWorldLocationToScreen(
                    current_world_pos,
                    &current_screen_pos,
                    false
                )) {
                continue;
            }

            draw_list->AddLine(
                {(float)previous_screen_pos.X, (float)previous_screen_pos.Y
                },
                {(float)current_screen_pos.X, (float)current_screen_pos.Y},
                IM_COL32_WHITE
            );

            previous_world_pos = current_world_pos;
        }
    }
}

void GDK::render_distance() {
    const SDK::FVector world_location_3d =
        Pawn::pawn->K2_GetActorLocation();

    SDK::FVector2D screen_location_2d = {};

    if (!World::player_controller->ProjectWorldLocationToScreen(
            world_location_3d,
            &screen_location_2d,
            false
        )) {
        return;
    }

    float distance = World::player_character->GetDistanceTo(Pawn::pawn);

    ImGui::GetBackgroundDrawList()->AddText(
        ImVec2(screen_location_2d.X, screen_location_2d.Y),
        IM_COL32_WHITE,
        std::to_string(distance).c_str()
    );
}

void GDK::render_bp_name() {
    const SDK::FVector world_location_3d =
        Pawn::pawn->K2_GetActorLocation();

    SDK::FVector2D screen_location_2d = {};

    if (!World::player_controller->ProjectWorldLocationToScreen(
            world_location_3d,
            &screen_location_2d,
            false
        )) {
        return;
    }

    ImGui::GetBackgroundDrawList()->AddText(
        ImVec2(screen_location_2d.X, screen_location_2d.Y),
        IM_COL32_WHITE,
        Pawn::pawn->GetName().c_str()
    );
}

void GDK::render_socket_names() {
    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

    for (const SDK::FName socket_name : Pawn::socket_names) {
        const SDK::FVector location_3d =
            Pawn::mesh->GetSocketLocation(socket_name);

        SDK::FVector2D location_2d = {};

        if (!World::player_controller->ProjectWorldLocationToScreen(
                location_3d,
                &location_2d,
                false
            )) {
            continue;
        }

        int index = Pawn::mesh->GetBoneIndex(socket_name);

        draw_list->AddText(
            ImVec2(location_2d.X, location_2d.Y),
            IM_COL32_WHITE,
            socket_name.ToString().c_str()
        );
    }
}

void GDK::render_socket_indices() {
    ImDrawList* draw_list = ImGui::GetBackgroundDrawList();

    for (const SDK::FName socket_name : Pawn::socket_names) {
        const SDK::FVector location_3d =
            Pawn::mesh->GetSocketLocation(socket_name);

        SDK::FVector2D location_2d = {};

        if (!World::player_controller->ProjectWorldLocationToScreen(
                location_3d,
                &location_2d,
                false
            )) {
            continue;
        }

        int socket_index = Pawn::mesh->GetBoneIndex(socket_name);

        // XXX too messy
        // if (socket_index > 11) {
        //     continue;
        // }

        draw_list->AddText(
            ImVec2(location_2d.X, location_2d.Y),
            IM_COL32_WHITE,
            std::to_string(socket_index).c_str()
        );
    }
}

bool GDK::dump_pawn_sockets(const SDK::APawn* const pawn) {
    std::ofstream file(
        std::format("{}.txt", pawn->GetName()),
        std::ios::trunc
    );

    if (!file.is_open()) {
        return false;
    }

    // XXX maybe not necessary to check
    SDK::USkeletalMeshComponent* mesh = pawn->Controller->Character->Mesh;

    file << "enum Bones : int {" << std::endl;

    for (const SDK::FName socket_name : mesh->GetAllSocketNames()) {
        const SDK::FVector location_3d =
            mesh->GetSocketLocation(socket_name);

        SDK::FVector2D location_2d = {};

        if (!World::player_controller->ProjectWorldLocationToScreen(
                location_3d,
                &location_2d,
                false
            )) {
            continue;
        }

        int index = mesh->GetBoneIndex(socket_name);

        file << "    " << socket_name.ToString() << " = " << index << ","
             << std::endl;
    }

    file << "};" << std::endl;

    file.close();

    return true;
}

void GDK::player_free_movement() {
    SDK::FVector player_location_3d =
        World::player_character->K2_GetActorLocation();

    SDK::FVector player_forward_3d =
        World::player_camera_manager->GetActorForwardVector();

    player_location_3d +=
        {player_forward_3d.X * 10.0f,
         player_forward_3d.Y * 10.0f,
         player_forward_3d.Z * 15.f};

    World::player_character
        ->K2_SetActorLocation(player_location_3d, false, nullptr, true);
}

bool GDK::is_on_screen(ImVec2 location_2d) {
    // XXX alternative, cuz not the best choice
    // int viewport_width = GetSystemMetrics(SM_CXSCREEN);
    // int viewport_height = GetSystemMetrics(SM_CYSCREEN);

    int viewport_width = {};
    int viewport_height = {};

    World::player_controller->GetViewportSize(
        &viewport_width,
        &viewport_height
    );

    return location_2d.x < viewport_width
        && location_2d.y < viewport_height && location_2d.x > 0
        && location_2d.y > 0;
}

bool World::update() {
    World::world = SDK::UWorld::GetWorld();
    if (World::world == nullptr) {
        return false;
    }

    World::game_instance = World::world->OwningGameInstance;
    if (World::game_instance == nullptr) {
        return false;
    }

    World::game_state = World::world->GameState;
    if (World::game_state == nullptr) {
        return false;
    }

    if (!World::game_instance->LocalPlayers.IsValid()) {
        return false;
    }

    World::local_player = World::game_instance->LocalPlayers[0];
    if (World::local_player == nullptr) {
        return false;
    }

    World::player_controller = World::local_player->PlayerController;
    if (World::player_controller == nullptr) {
        return false;
    }

    World::player_camera_manager =
        World::player_controller->PlayerCameraManager;
    if (World::player_camera_manager == nullptr) {
        return false;
    }

    World::player_character = World::player_controller->Character;
    if (World::player_character == nullptr) {
        return false;
    }

    World::persistent_level = World::world->PersistentLevel;
    if (World::persistent_level == nullptr) {
        return false;
    }

    World::actors = World::persistent_level->Actors;
    if (!World::actors.IsValid()) {
        return false;
    }

    return true;
}

bool Pawn::update() {
    Pawn::controller = Pawn::pawn->Controller;
    if (controller == nullptr) {
        return false;
    }

    Pawn::character = Pawn::controller->Character;
    if (character == nullptr) {
        return false;
    }

    Pawn::mesh = Pawn::character->Mesh;
    if (mesh == nullptr) {
        return false;
    }

    Pawn::socket_names = Pawn::mesh->GetAllSocketNames();
    if (!Pawn::socket_names.IsValid()) {
        return false;
    }

    return true;
}
