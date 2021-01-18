/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

enum eAnimGroup
{
    ANIM_GROUP_MAN = 0,
    ANIM_GROUP_PLAYER = 1,
    ANIM_GROUP_PLAYERROCKET = 2,
    ANIM_GROUP_PLAYER1ARMED = 3,
    ANIM_GROUP_PLAYER2ARMED = 4,
    ANIM_GROUP_PLAYERBBBAT = 5,
    ANIM_GROUP_SHUFFLE = 6,
    ANIM_GROUP_OLDMAN = 7,
    ANIM_GROUP_GANG1 = 8,
    ANIM_GROUP_GANG2 = 9,
    ANIM_GROUP_FATMAN = 10,
    ANIM_GROUP_OLDFATMAN = 11,
    ANIM_GROUP_WOMAN = 12,
    ANIM_GROUP_SHOPPING = 13,
    ANIM_GROUP_BUSYWOMAN = 14,
    ANIM_GROUP_SEXYWOMAN = 15,
    ANIM_GROUP_OLDWOMAN = 16,
    ANIM_GROUP_FATWOMAN = 17,
    ANIM_GROUP_PANICCHUNKY = 18,
    ANIM_GROUP_PLAYERBACK = 19,
    ANIM_GROUP_PLAYERLEFT = 20,
    ANIM_GROUP_PLAYERRIGHT = 21,
    ANIM_GROUP_ROCKETBACK = 22,
    ANIM_GROUP_ROCKETLEFT = 23,
    ANIM_GROUP_ROCKETRIGHT = 24
};

// GroupName : man | Group ID: 0 | BlockName: ped | Total Animations: 173
enum emanAnimGroup
{
    ANIM_MAN_WALK_CIVI = 0,
    ANIM_MAN_RUN_CIVI = 1,
    ANIM_MAN_SPRINT_PANIC = 2,
    ANIM_MAN_IDLE_STANCE = 3,
    ANIM_MAN_WALK_START = 4,
    ANIM_MAN_RUN_STOP = 5,
    ANIM_MAN_RUN_STOPR = 6,
    ANIM_MAN_IDLE_CAM = 7,
    ANIM_MAN_IDLE_HBHB = 8,
    ANIM_MAN_IDLE_TIRED = 9,
    ANIM_MAN_IDLE_ARMED = 10,
    ANIM_MAN_IDLE_CHAT = 11,
    ANIM_MAN_IDLE_TAXI = 12,
    ANIM_MAN_KO_SHOT_FRONT = 13,
    ANIM_MAN_KO_SHOT_FRONT_1 = 14,
    ANIM_MAN_KO_SHOT_FRONT_2 = 15,
    ANIM_MAN_KO_SHOT_FRONT_3 = 16,
    ANIM_MAN_KO_SHOT_FACE = 17,
    ANIM_MAN_KO_SHOT_STOM = 18,
    ANIM_MAN_KO_SHOT_ARML = 19,
    ANIM_MAN_KO_SHOT_ARMR = 20,
    ANIM_MAN_KO_SHOT_LEGL = 21,
    ANIM_MAN_KO_SHOT_LEGR = 22,
    ANIM_MAN_KD_LEFT = 23,
    ANIM_MAN_KD_RIGHT = 24,
    ANIM_MAN_KO_SKID_FRONT = 25,
    ANIM_MAN_KO_SPIN_R = 26,
    ANIM_MAN_KO_SKID_BACK = 27,
    ANIM_MAN_KO_SPIN_L = 28,
    ANIM_MAN_SHOT_PARTIAL = 29,
    ANIM_MAN_SHOT_LEFTP = 30,
    ANIM_MAN_SHOT_PARTIAL_1 = 31,
    ANIM_MAN_SHOT_RIGHTP = 32,
    ANIM_MAN_HIT_FRONT = 33,
    ANIM_MAN_HIT_L = 34,
    ANIM_MAN_HIT_BACK = 35,
    ANIM_MAN_HIT_R = 36,
    ANIM_MAN_FLOOR_HIT = 37,
    ANIM_MAN_HIT_BODYBLOW = 38,
    ANIM_MAN_HIT_CHEST = 39,
    ANIM_MAN_HIT_HEAD = 40,
    ANIM_MAN_HIT_WALK = 41,
    ANIM_MAN_HIT_WALL = 42,
    ANIM_MAN_FLOOR_HIT_F = 43,
    ANIM_MAN_HIT_BEHIND = 44,
    ANIM_MAN_PUNCHR = 45,
    ANIM_MAN_KICK_FLOOR = 46,
    ANIM_MAN_WEAPON_BAT_H = 47,
    ANIM_MAN_WEAPON_BAT_V = 48,
    ANIM_MAN_WEAPON_HGUN_BODY = 49,
    ANIM_MAN_WEAPON_AK_BODY = 50,
    ANIM_MAN_WEAPON_PUMP = 51,
    ANIM_MAN_WEAPON_SNIPER = 52,
    ANIM_MAN_WEAPON_THROW = 53,
    ANIM_MAN_WEAPON_THROWU = 54,
    ANIM_MAN_WEAPON_START_THROW = 55,
    ANIM_MAN_BOMBER = 56,
    ANIM_MAN_WEAPON_HGUN_RLOAD = 57,
    ANIM_MAN_WEAPON_AK_RLOAD = 58,
    ANIM_MAN_FPS_PUNCH = 59,
    ANIM_MAN_FPS_BAT = 60,
    ANIM_MAN_FPS_UZI = 61,
    ANIM_MAN_FPS_PUMP = 62,
    ANIM_MAN_FPS_AK = 63,
    ANIM_MAN_FPS_M16 = 64,
    ANIM_MAN_FPS_ROCKET = 65,
    ANIM_MAN_FIGHTIDLE = 66,
    ANIM_MAN_FIGHT2IDLE = 67,
    ANIM_MAN_FIGHTSH_F = 68,
    ANIM_MAN_FIGHTBODYBLOW = 69,
    ANIM_MAN_FIGHTHEAD = 70,
    ANIM_MAN_FIGHTKICK = 71,
    ANIM_MAN_FIGHTKNEE = 72,
    ANIM_MAN_FIGHTLHOOK = 73,
    ANIM_MAN_FIGHTPUNCH = 74,
    ANIM_MAN_FIGHTRNDHSE = 75,
    ANIM_MAN_FIGHTLNGKCK = 76,
    ANIM_MAN_FIGHTPPUNCH = 77,
    ANIM_MAN_CAR_JACKEDRHS = 78,
    ANIM_MAN_CAR_LJACKEDRHS = 79,
    ANIM_MAN_CAR_JACKEDLHS = 80,
    ANIM_MAN_CAR_LJACKEDLHS = 81,
    ANIM_MAN_CAR_QJACK = 82,
    ANIM_MAN_CAR_QJACKED = 83,
    ANIM_MAN_CAR_ALIGN_LHS = 84,
    ANIM_MAN_CAR_ALIGNHI_LHS = 85,
    ANIM_MAN_CAR_OPEN_LHS = 86,
    ANIM_MAN_CAR_DOORLOCKED_LHS = 87,
    ANIM_MAN_CAR_PULLOUT_LHS = 88,
    ANIM_MAN_CAR_PULLOUTL_LHS = 89,
    ANIM_MAN_CAR_GETIN_LHS = 90,
    ANIM_MAN_CAR_GETINL_LHS = 91,
    ANIM_MAN_CAR_CLOSEDOOR_LHS = 92,
    ANIM_MAN_CAR_CLOSEDOORL_LHS = 93,
    ANIM_MAN_CAR_ROLLDOOR = 94,
    ANIM_MAN_CAR_ROLLDOORLO = 95,
    ANIM_MAN_CAR_GETOUT_LHS = 96,
    ANIM_MAN_CAR_GETOUTL_LHS = 97,
    ANIM_MAN_CAR_CLOSE_LHS = 98,
    ANIM_MAN_CAR_ALIGN_RHS = 99,
    ANIM_MAN_CAR_ALIGNHI_RHS = 100,
    ANIM_MAN_CAR_OPEN_RHS = 101,
    ANIM_MAN_CAR_DOORLOCKED_RHS = 102,
    ANIM_MAN_CAR_PULLOUT_RHS = 103,
    ANIM_MAN_CAR_PULLOUTL_RHS = 104,
    ANIM_MAN_CAR_GETIN_RHS = 105,
    ANIM_MAN_CAR_GETINL_RHS = 106,
    ANIM_MAN_CAR_CLOSEDOOR_RHS = 107,
    ANIM_MAN_CAR_CLOSEDOORL_RHS = 108,
    ANIM_MAN_CAR_SHUFFLE_RHS = 109,
    ANIM_MAN_CAR_LSHUFFLE_RHS = 110,
    ANIM_MAN_CAR_SIT = 111,
    ANIM_MAN_CAR_LSIT = 112,
    ANIM_MAN_CAR_SITP = 113,
    ANIM_MAN_CAR_SITPLO = 114,
    ANIM_MAN_DRIVE_L = 115,
    ANIM_MAN_DRIVE_R = 116,
    ANIM_MAN_DRIVE_LO_L = 117,
    ANIM_MAN_DRIVE_LO_R = 118,
    ANIM_MAN_DRIVEBY_L = 119,
    ANIM_MAN_DRIVEBY_R = 120,
    ANIM_MAN_CAR_LB = 121,
    ANIM_MAN_DRIVE_BOAT = 122,
    ANIM_MAN_CAR_GETOUT_RHS = 123,
    ANIM_MAN_CAR_GETOUTL_RHS = 124,
    ANIM_MAN_CAR_CLOSE_RHS = 125,
    ANIM_MAN_CAR_HOOKERTALK = 126,
    ANIM_MAN_COACH_OPNL = 127,
    ANIM_MAN_COACH_OPNR = 128,
    ANIM_MAN_COACH_INL = 129,
    ANIM_MAN_COACH_INR = 130,
    ANIM_MAN_COACH_OUTL = 131,
    ANIM_MAN_TRAIN_GETIN = 132,
    ANIM_MAN_TRAIN_GETOUT = 133,
    ANIM_MAN_CAR_CRAWLOUTRHS = 134,
    ANIM_MAN_CAR_CRAWLOUTRHS_1 = 135,
    ANIM_MAN_VAN_OPENL = 136,
    ANIM_MAN_VAN_GETINL = 137,
    ANIM_MAN_VAN_CLOSEL = 138,
    ANIM_MAN_VAN_GETOUTL = 139,
    ANIM_MAN_VAN_OPEN = 140,
    ANIM_MAN_VAN_GETIN = 141,
    ANIM_MAN_VAN_CLOSE = 142,
    ANIM_MAN_VAN_GETOUT = 143,
    ANIM_MAN_GETUP = 144,
    ANIM_MAN_GETUP_1 = 145,
    ANIM_MAN_GETUP_2 = 146,
    ANIM_MAN_GETUP_FRONT = 147,
    ANIM_MAN_JUMP_LAUNCH = 148,
    ANIM_MAN_JUMP_GLIDE = 149,
    ANIM_MAN_JUMP_LAND = 150,
    ANIM_MAN_FALL_FALL = 151,
    ANIM_MAN_FALL_GLIDE = 152,
    ANIM_MAN_FALL_LAND = 153,
    ANIM_MAN_FALL_COLLAPSE = 154,
    ANIM_MAN_EV_STEP = 155,
    ANIM_MAN_EV_DIVE = 156,
    ANIM_MAN_XPRESSSCRATCH = 157,
    ANIM_MAN_ROADCROSS = 158,
    ANIM_MAN_TURN_180 = 159,
    ANIM_MAN_ARRESTGUN = 160,
    ANIM_MAN_DROWN = 161,
    ANIM_MAN_CPR = 162,
    ANIM_MAN_DUCK_DOWN = 163,
    ANIM_MAN_DUCK_LOW = 164,
    ANIM_MAN_RBLOCK_CSHOOT = 165,
    ANIM_MAN_WEAPON_THROWU_1 = 166,
    ANIM_MAN_HANDSUP = 167,
    ANIM_MAN_HANDSCOWER = 168,
    ANIM_MAN_FUCKU = 169,
    ANIM_MAN_PHONE_IN = 170,
    ANIM_MAN_PHONE_OUT = 171,
    ANIM_MAN_PHONE_TALK = 172,
};

// GroupName : player | Group ID: 1 | BlockName: ped | Total Animations: 5
enum eplayerAnimGroup
{
    ANIM_PLAYER_WALK_PLAYER = 0,
    ANIM_PLAYER_RUN_PLAYER = 1,
    ANIM_PLAYER_SPRINT_CIVI = 2,
    ANIM_PLAYER_IDLE_STANCE = 3,
    ANIM_PLAYER_WALK_START = 4,
};

// GroupName : playerrocket | Group ID: 2 | BlockName: ped | Total Animations: 5
enum eplayerrocketAnimGroup
{
    ANIM_PLAYERROCKET_WALK_ROCKET = 0,
    ANIM_PLAYERROCKET_RUN_ROCKET = 1,
    ANIM_PLAYERROCKET_RUN_ROCKET_1 = 2,
    ANIM_PLAYERROCKET_IDLE_ROCKET = 3,
    ANIM_PLAYERROCKET_WALK_START_ROCKET = 4,
};

// GroupName : player1armed | Group ID: 3 | BlockName: ped | Total Animations: 5
enum eplayer1armedAnimGroup
{
    ANIM_PLAYER1ARMED_WALK_PLAYER = 0,
    ANIM_PLAYER1ARMED_RUN_1ARMED = 1,
    ANIM_PLAYER1ARMED_SPRINT_CIVI = 2,
    ANIM_PLAYER1ARMED_IDLE_STANCE = 3,
    ANIM_PLAYER1ARMED_WALK_START = 4,
};

// GroupName : player2armed | Group ID: 4 | BlockName: ped | Total Animations: 5
enum eplayer2armedAnimGroup
{
    ANIM_PLAYER2ARMED_WALK_PLAYER = 0,
    ANIM_PLAYER2ARMED_RUN_ARMED = 1,
    ANIM_PLAYER2ARMED_RUN_ARMED_1 = 2,
    ANIM_PLAYER2ARMED_IDLE_STANCE = 3,
    ANIM_PLAYER2ARMED_WALK_START = 4,
};

// GroupName : playerBBBat | Group ID: 5 | BlockName: ped | Total Animations: 5
enum eplayerBBBatAnimGroup
{
    ANIM_PLAYERBBBAT_WALK_PLAYER = 0,
    ANIM_PLAYERBBBAT_RUN_PLAYER = 1,
    ANIM_PLAYERBBBAT_RUN_PLAYER_1 = 2,
    ANIM_PLAYERBBBAT_IDLE_STANCE = 3,
    ANIM_PLAYERBBBAT_WALK_START = 4,
};

// GroupName : shuffle | Group ID: 6 | BlockName: ped | Total Animations: 4
enum eshuffleAnimGroup
{
    ANIM_SHUFFLE_WALK_SHUFFLE = 0,
    ANIM_SHUFFLE_RUN_CIVI = 1,
    ANIM_SHUFFLE_SPRINT_CIVI = 2,
    ANIM_SHUFFLE_IDLE_STANCE = 3,
};

// GroupName : oldman | Group ID: 7 | BlockName: ped | Total Animations: 4
enum eoldmanAnimGroup
{
    ANIM_OLDMAN_WALK_OLD = 0,
    ANIM_OLDMAN_RUN_CIVI = 1,
    ANIM_OLDMAN_SPRINT_CIVI = 2,
    ANIM_OLDMAN_IDLE_STANCE = 3,
};

// GroupName : gang1 | Group ID: 8 | BlockName: ped | Total Animations: 4
enum egang1AnimGroup
{
    ANIM_GANG1_WALK_GANG1 = 0,
    ANIM_GANG1_RUN_GANG1 = 1,
    ANIM_GANG1_SPRINT_CIVI = 2,
    ANIM_GANG1_IDLE_STANCE = 3,
};

// GroupName : gang2 | Group ID: 9 | BlockName: ped | Total Animations: 4
enum egang2AnimGroup
{
    ANIM_GANG2_WALK_GANG2 = 0,
    ANIM_GANG2_RUN_GANG1 = 1,
    ANIM_GANG2_SPRINT_CIVI = 2,
    ANIM_GANG2_IDLE_STANCE = 3,
};

// GroupName : fatman | Group ID: 10 | BlockName: ped | Total Animations: 4
enum efatmanAnimGroup
{
    ANIM_FATMAN_WALK_FAT = 0,
    ANIM_FATMAN_RUN_CIVI = 1,
    ANIM_FATMAN_WOMAN_RUNPANIC = 2,
    ANIM_FATMAN_IDLE_STANCE = 3,
};

// GroupName : oldfatman | Group ID: 11 | BlockName: ped | Total Animations: 4
enum eoldfatmanAnimGroup
{
    ANIM_OLDFATMAN_WALK_FATOLD = 0,
    ANIM_OLDFATMAN_RUN_FATOLD = 1,
    ANIM_OLDFATMAN_WOMAN_RUNPANIC = 2,
    ANIM_OLDFATMAN_IDLE_STANCE = 3,
};

// GroupName : woman | Group ID: 12 | BlockName: ped | Total Animations: 4
enum ewomanAnimGroup
{
    ANIM_WOMAN_WOMAN_WALKNORM = 0,
    ANIM_WOMAN_WOMAN_RUN = 1,
    ANIM_WOMAN_WOMAN_RUNPANIC = 2,
    ANIM_WOMAN_WOMAN_IDLESTANCE = 3,
};

// GroupName : shopping | Group ID: 13 | BlockName: ped | Total Animations: 4
enum eshoppingAnimGroup
{
    ANIM_SHOPPING_WOMAN_WALKSHOP = 0,
    ANIM_SHOPPING_WOMAN_RUN = 1,
    ANIM_SHOPPING_WOMAN_RUN_1 = 2,
    ANIM_SHOPPING_WOMAN_IDLESTANCE = 3,
};

// GroupName : busywoman | Group ID: 14 | BlockName: ped | Total Animations: 4
enum ebusywomanAnimGroup
{
    ANIM_BUSYWOMAN_WOMAN_WALKBUSY = 0,
    ANIM_BUSYWOMAN_WOMAN_RUN = 1,
    ANIM_BUSYWOMAN_WOMAN_RUNPANIC = 2,
    ANIM_BUSYWOMAN_WOMAN_IDLESTANCE = 3,
};

// GroupName : sexywoman | Group ID: 15 | BlockName: ped | Total Animations: 4
enum esexywomanAnimGroup
{
    ANIM_SEXYWOMAN_WOMAN_WALKSEXY = 0,
    ANIM_SEXYWOMAN_WOMAN_RUN = 1,
    ANIM_SEXYWOMAN_WOMAN_RUNPANIC = 2,
    ANIM_SEXYWOMAN_WOMAN_IDLESTANCE = 3,
};

// GroupName : oldwoman | Group ID: 16 | BlockName: ped | Total Animations: 4
enum eoldwomanAnimGroup
{
    ANIM_OLDWOMAN_WOMAN_WALKOLD = 0,
    ANIM_OLDWOMAN_WOMAN_RUN = 1,
    ANIM_OLDWOMAN_WOMAN_RUNPANIC = 2,
    ANIM_OLDWOMAN_WOMAN_IDLESTANCE = 3,
};

// GroupName : fatwoman | Group ID: 17 | BlockName: ped | Total Animations: 4
enum efatwomanAnimGroup
{
    ANIM_FATWOMAN_WALK_FAT = 0,
    ANIM_FATWOMAN_WOMAN_RUN = 1,
    ANIM_FATWOMAN_WOMAN_RUNPANIC = 2,
    ANIM_FATWOMAN_WOMAN_IDLESTANCE = 3,
};

// GroupName : panicchunky | Group ID: 18 | BlockName: ped | Total Animations: 4
enum epanicchunkyAnimGroup
{
    ANIM_PANICCHUNKY_RUN_FATOLD = 0,
    ANIM_PANICCHUNKY_WOMAN_RUNPANIC = 1,
    ANIM_PANICCHUNKY_WOMAN_RUNPANIC_1 = 2,
    ANIM_PANICCHUNKY_IDLE_STANCE = 3,
};

// GroupName : playerback | Group ID: 19 | BlockName: ped | Total Animations: 5
enum eplayerbackAnimGroup
{
    ANIM_PLAYERBACK_WALK_PLAYER_BACK = 0,
    ANIM_PLAYERBACK_RUN_PLAYER_BACK = 1,
    ANIM_PLAYERBACK_RUN_PLAYER_BACK_1 = 2,
    ANIM_PLAYERBACK_IDLE_STANCE = 3,
    ANIM_PLAYERBACK_WALK_START_BACK = 4,
};

// GroupName : playerleft | Group ID: 20 | BlockName: ped | Total Animations: 5
enum eplayerleftAnimGroup
{
    ANIM_PLAYERLEFT_WALK_PLAYER_LEFT = 0,
    ANIM_PLAYERLEFT_RUN_LEFT = 1,
    ANIM_PLAYERLEFT_RUN_LEFT_1 = 2,
    ANIM_PLAYERLEFT_IDLE_STANCE = 3,
    ANIM_PLAYERLEFT_WALK_START_LEFT = 4,
};

// GroupName : playerright | Group ID: 21 | BlockName: ped | Total Animations: 5
enum eplayerrightAnimGroup
{
    ANIM_PLAYERRIGHT_WALK_PLAYER_RIGHT = 0,
    ANIM_PLAYERRIGHT_RUN_RIGHT = 1,
    ANIM_PLAYERRIGHT_RUN_RIGHT_1 = 2,
    ANIM_PLAYERRIGHT_IDLE_STANCE = 3,
    ANIM_PLAYERRIGHT_WALK_START_RIGHT = 4,
};

// GroupName : rocketback | Group ID: 22 | BlockName: ped | Total Animations: 5
enum erocketbackAnimGroup
{
    ANIM_ROCKETBACK_WALK_ROCKET_BACK = 0,
    ANIM_ROCKETBACK_RUN_ROCKET_BACK = 1,
    ANIM_ROCKETBACK_RUN_ROCKET_BACK_1 = 2,
    ANIM_ROCKETBACK_IDLE_ROCKET = 3,
    ANIM_ROCKETBACK_WALKST_ROCKET_BACK = 4,
};

// GroupName : rocketleft | Group ID: 23 | BlockName: ped | Total Animations: 5
enum erocketleftAnimGroup
{
    ANIM_ROCKETLEFT_WALK_ROCKET_LEFT = 0,
    ANIM_ROCKETLEFT_RUN_ROCKET_LEFT = 1,
    ANIM_ROCKETLEFT_RUN_ROCKET_LEFT_1 = 2,
    ANIM_ROCKETLEFT_IDLE_ROCKET = 3,
    ANIM_ROCKETLEFT_WALKST_ROCKET_LEFT = 4,
};

// GroupName : rocketright | Group ID: 24 | BlockName: ped | Total Animations: 5
enum erocketrightAnimGroup
{
    ANIM_ROCKETRIGHT_WALK_ROCKET_RIGHT = 0,
    ANIM_ROCKETRIGHT_RUN_ROCKET_RIGHT = 1,
    ANIM_ROCKETRIGHT_RUN_ROCKET_RIGHT_1 = 2,
    ANIM_ROCKETRIGHT_IDLE_ROCKET = 3,
    ANIM_ROCKETRIGHT_WALKST_ROCKET_RIGHT = 4,
};
