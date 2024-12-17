#pragma once

#include "../deps/imgui/imgui.h"
// #include "../deps/ue_4_27_2_sdk/SDK.hpp"
#include "../deps/ue_5_1_1_sdk/SDK/Engine_classes.hpp"

namespace CemeteryCreatureBones {
enum CemeteryCreatureBones : int {
    Wrist_L_WeaponSocket = -1,
    HeadAim = -1,
    TorsoAim = -1,
    UnrealRoot = 0,
    Root_M = 1,
    Spine1_M = 2,
    Spine2_M = 3,
    Spine3_M = 4,
    Chest_M = 5,
    Neck_B_M = 6,
    Head_B_M = 7,
    Jaw_B_M = 8,
    JawEnd_B_M = 9,
    HeadEnd1_B_M = 10,
    HeadEnd_B_M = 11,
    ExtraTorso1_R = 12,
    ExtraTorso2_R = 13,
    ExtraTorso3_R = 14,
    ExtraTorso4_R = 15,
    ExtraTorso5_R = 16,
    ExtraArmLow_Scapula_R = 17,
    ExtraArmLow_Shoulder_R = 18,
    ExtraArmLow_ShoulderPart1_R = 19,
    ExtraArmLow_Elbow_R = 20,
    ExtraArmLow_ElbowPart1_R = 21,
    ExtraArmLow_Wrist_R = 22,
    ExtraArmLow_MiddleFinger1_R = 23,
    ExtraArmLow_MiddleFinger2_R = 24,
    ExtraArmLow_MiddleFinger3_R = 25,
    ExtraArmLow_MiddleFinger4_R = 26,
    ExtraArmLow_ThumbFinger1_R = 27,
    ExtraArmLow_ThumbFinger2_R = 28,
    ExtraArmLow_ThumbFinger3_R = 29,
    ExtraArmLow_ThumbFinger4_R = 30,
    ExtraArmLow_IndexFinger1_R = 31,
    ExtraArmLow_IndexFinger2_R = 32,
    ExtraArmLow_IndexFinger3_R = 33,
    ExtraArmLow_IndexFinger4_R = 34,
    ExtraArmLow_RingFinger1_R = 35,
    ExtraArmLow_RingFinger2_R = 36,
    ExtraArmLow_RingFinger3_R = 37,
    ExtraArmLow_RingFinger4_R = 38,
    ExtraArmLow_PinkyFinger1_R = 39,
    ExtraArmLow_PinkyFinger2_R = 40,
    ExtraArmLow_PinkyFinger3_R = 41,
    ExtraArmLow_PinkyFinger4_R = 42,
    ExtraArmLow_Scapula1_R = 43,
    ExtraArmLow_Shoulder1_R = 44,
    ExtraArmLow_Shoulder1Part1_R = 45,
    ExtraArmLow_Elbow1_R = 46,
    ExtraArmLow_Elbow1Part1_R = 47,
    ExtraArmLow_Wrist1_R = 48,
    ExtraArmLow_MiddleFinger5_R = 49,
    ExtraArmLow_MiddleFinger6_R = 50,
    ExtraArmLow_MiddleFinger7_R = 51,
    ExtraArmLow_MiddleFinger8_R = 52,
    ExtraArmLow_ThumbFinger5_R = 53,
    ExtraArmLow_ThumbFinger6_R = 54,
    ExtraArmLow_ThumbFinger7_R = 55,
    ExtraArmLow_ThumbFinger8_R = 56,
    ExtraArmLow_IndexFinger5_R = 57,
    ExtraArmLow_IndexFinger6_R = 58,
    ExtraArmLow_IndexFinger7_R = 59,
    ExtraArmLow_IndexFinger8_R = 60,
    ExtraArmLow_RingFinger5_R = 61,
    ExtraArmLow_RingFinger6_R = 62,
    ExtraArmLow_RingFinger7_R = 63,
    ExtraArmLow_RingFinger8_R = 64,
    ExtraArmLow_PinkyFinger5_R = 65,
    ExtraArmLow_PinkyFinger6_R = 66,
    ExtraArmLow_PinkyFinger7_R = 67,
    ExtraArmLow_PinkyFinger8_R = 68,
    C_ExtraTorso_TentaBase_R = 69,
    C_ExtraTorso_Tenta4_1_R = 70,
    C_ExtraTorso_Tenta4_2_R = 71,
    C_ExtraTorso_Tenta4_3_R = 72,
    C_ExtraTorso_Tenta4_4_R = 73,
    C_ExtraTorso_Tenta4_5_R = 74,
    C_ExtraTorso_Tenta4_6_R = 75,
    C_ExtraTorso_Tenta2_1_R = 76,
    C_ExtraTorso_Tenta2_2_R = 77,
    C_ExtraTorso_Tenta2_3_R = 78,
    C_ExtraTorso_Tenta2_4_R = 79,
    C_ExtraTorso_Tenta2_5_R = 80,
    C_ExtraTorso_Tenta1_1_R = 81,
    C_ExtraTorso_Tenta1_2_R = 82,
    C_ExtraTorso_Tenta1_3_R = 83,
    C_ExtraTorso_Tenta1_4_R = 84,
    C_ExtraTorso_Tenta1_5_R = 85,
    C_ExtraTorso_Tenta3_1_R = 86,
    C_ExtraTorso_Tenta3_2_R = 87,
    C_ExtraTorso_Tenta3_3_R = 88,
    C_ExtraTorso_Tenta3_4_R = 89,
    C_ExtraTorso_Tenta3_5_R = 90,
    C_TentacleArm1_R = 91,
    C_TentacleArm2_R = 92,
    C_TentacleArm3_R = 93,
    C_TentacleArm4_R = 94,
    C_TentacleArm5_R = 95,
    C_TentacleArm6_R = 96,
    C_TentacleArm7_R = 97,
    C_TentacleArm8_R = 98,
    C_TentacleArm9_R = 99,
    C_TentacleArm10_R = 100,
    C_TentacleArm11_R = 101,
    C_TentacleArm12_R = 102,
    C_TentacleArm13_R = 103,
    C_TentacleArm14_R = 104,
    C_TentacleArm15_R = 105,
    C_TentacleArm16_R = 106,
    C_TentacleArm17_R = 107,
    C_TentacleArm18_R = 108,
    A_HeadTentaBase_M = 109,
    A_HeadTenta1_1_R = 110,
    A_HeadTenta1_2_R = 111,
    A_HeadTenta1_3_R = 112,
    A_HeadTenta1_4_R = 113,
    A_HeadTenta1_5_R = 114,
    A_HeadTenta2_1_R = 115,
    A_HeadTenta2_2_R = 116,
    A_HeadTenta2_3_R = 117,
    A_HeadTenta2_4_R = 118,
    A_HeadTenta2_5_R = 119,
    A_HeadTenta2_6_R = 120,
    A_HeadTenta2_7_R = 121,
    A_HeadTenta3_1_R = 122,
    A_HeadTenta3_2_R = 123,
    A_HeadTenta3_3_R = 124,
    A_HeadTenta3_4_R = 125,
    A_HeadTenta3_5_R = 126,
    A_HeadTenta3_6_R = 127,
    A_HeadTenta3_7_R = 128,
    A_HeadTenta4_1_R = 129,
    A_HeadTenta4_2_R = 130,
    A_HeadTenta4_3_R = 131,
    A_HeadTenta4_4_R = 132,
    A_HeadTenta4_5_R = 133,
    A_HeadTenta4_6_R = 134,
    A_HeadTenta4_7_R = 135,
    A_HeadTenta5_1_R = 136,
    A_HeadTenta5_2_R = 137,
    A_HeadTenta5_3_R = 138,
    A_HeadTenta5_4_R = 139,
    A_HeadTenta5_5_R = 140,
    A_HeadTenta6_1_R = 141,
    A_HeadTenta6_2_R = 142,
    A_HeadTenta6_3_R = 143,
    A_HeadTenta6_4_R = 144,
    A_HeadTenta6_5_R = 145,
    A_HeadTenta7_1_R = 146,
    A_HeadTenta7_2_R = 147,
    A_HeadTenta7_3_R = 148,
    A_HeadTenta7_4_R = 149,
    A_HeadTenta7_5_R = 150,
    A_HeadTenta8_1_R = 151,
    A_HeadTenta8_2_R = 152,
    A_HeadTenta8_3_R = 153,
    A_HeadTenta8_4_R = 154,
    A_HeadTenta8_5_R = 155,
    A_HeadTenta8_6_R = 156,
    A_HeadTenta8_7_R = 157,
    A_HeadTenta9_1_R = 158,
    A_HeadTenta9_2_R = 159,
    A_HeadTenta9_3_R = 160,
    A_HeadTenta9_4_R = 161,
    A_HeadTenta9_5_R = 162,
    A_HeadTenta10_1_R = 163,
    A_HeadTenta10_2_R = 164,
    A_HeadTenta10_3_R = 165,
    A_HeadTenta10_4_R = 166,
    A_HeadTenta10_5_R = 167,
    Scapula_R = 168,
    Shoulder_R = 169,
    ShoulderPart1_R = 170,
    Elbow_R = 171,
    ElbowPart1_R = 172,
    Wrist_R = 173,
    MiddleFinger1_R = 174,
    MiddleFinger2_R = 175,
    MiddleFinger3_R = 176,
    MiddleFinger4_R = 177,
    ThumbFinger1_R = 178,
    ThumbFinger2_R = 179,
    ThumbFinger3_R = 180,
    ThumbFinger4_R = 181,
    IndexFinger1_R = 182,
    IndexFinger2_R = 183,
    IndexFinger3_R = 184,
    IndexFinger4_R = 185,
    RingFinger1_R = 186,
    RingFinger2_R = 187,
    RingFinger3_R = 188,
    RingFinger4_R = 189,
    PinkyFinger1_R = 190,
    PinkyFinger2_R = 191,
    PinkyFinger3_R = 192,
    PinkyFinger4_R = 193,
    D_ThumbFinger1_R = 194,
    D_ThumbFinger2_R = 195,
    D_ThumbFinger3_R = 196,
    D_ThumbFinger4_R = 197,
    D_IndexFinger1_R = 198,
    D_IndexFinger2_R = 199,
    D_IndexFinger3_R = 200,
    D_IndexFinger4_R = 201,
    D_MiddleFinger1_R = 202,
    D_MiddleFinger2_R = 203,
    D_MiddleFinger3_R = 204,
    D_MiddleFinger4_R = 205,
    D_RingFinger1_R = 206,
    D_RingFinger2_R = 207,
    D_RingFinger3_R = 208,
    D_RingFinger4_R = 209,
    D_PinkyFinger1_R = 210,
    D_PinkyFinger2_R = 211,
    D_PinkyFinger3_R = 212,
    D_PinkyFinger4_R = 213,
    Scapula_L = 214,
    Shoulder_L = 215,
    ShoulderPart1_L = 216,
    Elbow_L = 217,
    ElbowPart1_L = 218,
    Wrist_L = 219,
    MiddleFinger1_L = 220,
    MiddleFinger2_L = 221,
    MiddleFinger3_L = 222,
    MiddleFinger4_L = 223,
    ThumbFinger1_L = 224,
    ThumbFinger2_L = 225,
    ThumbFinger3_L = 226,
    ThumbFinger4_L = 227,
    IndexFinger1_L = 228,
    IndexFinger2_L = 229,
    IndexFinger3_L = 230,
    IndexFinger4_L = 231,
    RingFinger1_L = 232,
    RingFinger2_L = 233,
    RingFinger3_L = 234,
    RingFinger4_L = 235,
    PinkyFinger1_L = 236,
    PinkyFinger2_L = 237,
    PinkyFinger3_L = 238,
    PinkyFinger4_L = 239,
    D_ThumbFinger1_L = 240,
    D_ThumbFinger2_L = 241,
    D_ThumbFinger3_L = 242,
    D_ThumbFinger4_L = 243,
    D_IndexFinger1_L = 244,
    D_IndexFinger2_L = 245,
    D_IndexFinger3_L = 246,
    D_IndexFinger4_L = 247,
    D_MiddleFinger1_L = 248,
    D_MiddleFinger2_L = 249,
    D_MiddleFinger3_L = 250,
    D_MiddleFinger4_L = 251,
    D_RingFinger1_L = 252,
    D_RingFinger2_L = 253,
    D_RingFinger3_L = 254,
    D_RingFinger4_L = 255,
    D_PinkyFinger1_L = 256,
    D_PinkyFinger2_L = 257,
    D_PinkyFinger3_L = 258,
    D_PinkyFinger4_L = 259,
    B_DynRibs1_R = 260,
    B_DynRibs2_R = 261,
    B_DynRibs1_L = 262,
    B_DynRibs2_L = 263,
    C_DynBellyUpBag1_M = 264,
    C_DynBellyUpBag2_M = 265,
    C_DynBackEntrails1_M = 266,
    C_DynBackEntrails2_M = 267,
    C_DynBellyLowBag1_M = 268,
    C_DynBellyLowBag2_M = 269,
    Hip_R = 270,
    HipPart1_R = 271,
    Knee_R = 272,
    KneePart1_R = 273,
    Ankle_R = 274,
    Toes_R = 275,
    ToesEnd_R = 276,
    B_DynBelly1_R = 277,
    B_DynBelly2_R = 278,
    Hip_L = 279,
    HipPart1_L = 280,
    Knee_L = 281,
    KneePart1_L = 282,
    Ankle_L = 283,
    Toes_L = 284,
    ToesEnd_L = 285,
    B_DynBelly1_L = 286,
    B_DynBelly2_L = 287,
    ik_foot_root = 288,
    ik_foot_R = 289,
    ik_foot_L = 290,
    ik_hand_root = 291,
    ik_hand_gun = 292,
    ik_hand_R = 293,
    ik_hand_L = 294,
    ik_torsoHand_Gun = 295,
    ik_torsoHand_R = 296,
    ik_torsoHand_L = 297,
    LowerLeg_IK_L = 298,
    LowerLeg_IK_R = 299,
    LowerArm_IK_L = 300,
    LowerArm_IK_R = 301,
    LowerTorsoArm_IK_L = 302,
    LowerTorsoArm_IK_R = 303,
};
}

namespace MobBurrowerBones {

enum Bones : int {
    HeadAim = -1,
    UnrealRoot = 0,
    ik_foot_root = 1,
    ik_foot_R = 2,
    ik_foot_L = 3,
    ik_LowerArm_l = 4,
    ik_LowerArm_r = 5,
    Root_M = 6,
    Spine1_M = 7,
    Spine2_M = 8,
    Spine3_M = 9,
    Spine4_M = 10,
    Spine5_M = 11,
    Spine6_M = 12,
    Spine7_M = 13,
    Tail1_M = 14,
    Tail2_M = 15,
    Tail3_M = 16,
    Tail4_M = 17,
    Tail5_M = 18,
    Tail6_M = 19,
    Tail7_M = 20,
    Tail8_M = 21,
    TailNub_M = 22,
    TailSpike1_R = 23,
    TailSpike2_R = 24,
    TailSpike1_L = 25,
    TailSpike2_L = 26,
    TailBone1_M = 27,
    TailBone2_M = 28,
    Adj_Belly_M = 29,
    Adj_Belly_Nub_M = 30,
    Neck_M = 31,
    Head_M = 32,
    HeadNub_M = 33,
    Mandible1_R = 34,
    Mandible2_R = 35,
    Mandible3_R = 36,
    Mandible4_R = 37,
    Mandible5_R = 38,
    Mandible6_R = 39,
    Mouth2_R = 40,
    Mouth2Nub_R = 41,
    Mouth3_R = 42,
    Mouth3Nub_R = 43,
    Mouth4_R = 44,
    Mouth4Nub_R = 45,
    Mouth1_R = 46,
    Mouth1Nub_R = 47,
    Mandible1_L = 48,
    Mandible2_L = 49,
    Mandible3_L = 50,
    Mandible4_L = 51,
    Mandible5_L = 52,
    Mandible6_L = 53,
    Mouth2_L = 54,
    Mouth2Nub_L = 55,
    Mouth3_L = 56,
    Mouth3Nub_L = 57,
    Mouth4_L = 58,
    Mouth4Nub_L = 59,
    Scapula_R = 60,
    Shoulder_R = 61,
    lowerarm_r = 62,
    hand_r = 63,
    HandEnd_R = 64,
    Toe2_1_R = 65,
    Toe2_2_R = 66,
    Toe2_3_R = 67,
    Toe1_1_R = 68,
    Toe1_2_R = 69,
    Toe1_3_R = 70,
    Toe3_1_R = 71,
    Toe3_2_R = 72,
    Toe3_3_R = 73,
    Adj_Shoulderspike_R = 74,
    Adj_Shoulderspike_Nub_R = 75,
    Adj_Shoulder_R = 76,
    Adj_Shoulder_Nub_R = 77,
    Dyn_ArmSkin_R = 78,
    Dyn_ArmSkin_Nub_R = 79,
    Scapula_L = 80,
    Shoulder_L = 81,
    lowerarm_l = 82,
    hand_l = 83,
    HandEnd_L = 84,
    Toe2_1_L = 85,
    Toe2_2_L = 86,
    Toe2_3_L = 87,
    Toe1_1_L = 88,
    Toe1_2_L = 89,
    Toe1_3_L = 90,
    Toe3_1_L = 91,
    Toe3_2_L = 92,
    Toe3_3_L = 93,
    Adj_Shoulderspike_L = 94,
    Adj_Shoulderspike_Nub_L = 95,
    Adj_Shoulder_L = 96,
    Adj_Shoulder_Nub_L = 97,
    Dyn_ArmSkin_L = 98,
    Dyn_ArmSkin_Nub_L = 99,
    Adj_Chest_R = 100,
    Adj_Chest_Nub_R = 101,
    Adj_Chest_L = 102,
    Adj_Chest_Nub_L = 103,
};
}

// Game Development Kit
class GDK {
    friend class World;
    friend class Pawn;

  private:
    static void on_actors();
    static void on_pawn();

    static void render_main_window();
    static void render_debug_window();

    static void render_game_state();

    // release
    static void render_box_2d();
    static void render_box_3d();
    static void render_bones();
    static void render_distance();

    // debug
    static void render_bp_name();
    static void render_socket_names();
    static void render_socket_indices();

    static bool dump_pawn_sockets(const SDK::APawn* const);

    static bool is_on_screen(ImVec2);

    static void player_free_movement();

  private:
    static const std::vector<
        std::vector<CemeteryCreatureBones::CemeteryCreatureBones>>
        CEMETERY_CREATURE_BONE_LISTS;

    static bool is_rendering_box_2d;
    static bool is_rendering_box_3d;
    static bool is_rendering_bones;
    static bool is_rendering_distance;

#ifdef _DEBUG
    static bool is_rendering_bp_name;
    static bool is_rendering_socket_names;
    static bool is_rendering_socket_indices;
#endif

    static bool is_player_free_movement;

  public:
    static void on_frame();
};

class World {
    friend class GDK;

  protected:
    static SDK::UWorld* world;
    static SDK::UGameInstance* game_instance;
    static SDK::AGameStateBase* game_state;
    static SDK::ULocalPlayer* local_player;
    static SDK::APlayerController* player_controller;
    static SDK::APlayerCameraManager* player_camera_manager;
    static SDK::ACharacter* player_character;
    static SDK::ULevel* persistent_level;
    static SDK::TArray<class SDK::AActor*> actors;

  protected:
    static bool update();
};

class Pawn {
    friend class GDK;

  protected:
    static SDK::APawn* pawn;
    static SDK::AController* controller;
    static SDK::ACharacter* character;
    static SDK::USkeletalMeshComponent* mesh;
    static SDK::TArray<class SDK::FName> socket_names;

    static SDK::FVector world_location_3d;
    static SDK::FVector world_location_2d;

  protected:
    static bool update();
};
