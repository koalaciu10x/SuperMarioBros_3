﻿#pragma once

#define ID_TEX_BBOX		-100	// special texture to draw object bounding box
#define ID_TEX_DARKEN	-200	// special texture to darken the screen
#define TRANSITION_SPRITE_ID	1111
#define ALPHA_MAX_VALUE			255
#define ALPHA_MIN_VALUE			0

// Scene
#define OVERWORLD_MAP_SCENE_ID	0
#define INTRO_SCENE_ID			99
#define MAP_1_SCENE_ID			1
#define MAP_4_SCENE_ID			4

// Intro Display
#define	CURTAIN_HEIGHT			183
#define LOGO_INITIAL_POS_Y		-113
#define LOGO_LIMIT_POS_Y		24
#define CURSOR_POS_Y_1_PLAYER	144
#define CURSOR_POS_Y_2_PLAYER	160
#define CURSOR_POS_X			72
#define	NUMBER_3_POS_X			112
#define	NUMBER_3_POS_Y			96

#define LOGO_VIBRATE_TIME		600
#define REVEAL_DELAY_TIME		800

#define CURTAIN_SPEED_Y			0.11f
#define LOGO_SPEED_Y			0.3f

#define LOGO_ANI_NORMAL			0
#define LOGO_ANI_VIBRATE		1

#define CURSOR_AT_1_PLAYER		0
#define CURSOR_AT_2_PLAYER		1

// Tileset
#define TILESET_BBOX_SIDE_LENGTH	16

// Brick
#define BRICK_BBOX_SIDE_LENGTH	16

// Brick contains item
#define BRICK_DEFLECT_SPEED_Y		0.1f
#define BRICK_BOUNCE_UP_TO			10

#define QUESTION_BRICK_ANI			0
#define NORMAL_BRICK_ANI			1
#define	DISGUISED_BRONZE_BRICK_ANI	2
#define	STATE_RAMMED				101
#define STATE_BEING_HIT_BY_TAIL		102

#define TYPE_SUPER_MUSHROOM			1
#define TYPE_UP_MUSHROOM			2

// Bronze brick and Coin
#define BRONZE_BRICK_ANI		0
#define IDLE_COIN_ANI			1
#define ROTATING_COIN			2
#define TRANSFORMATION_TIME		7000 //8000
#define STATE_TRANSFORMATION	100
#define STATE_NORMAL			200

#define BRONZE_BRICK_HORIZONTAL_SEPARATION_LINE_TOP	367
#define BRONZE_BRICK_HORIZONTAL_SEPARATION_LINE_BOT	416

enum BrickTransformation
{
	BRICK_FORM = 1,
	COIN_FORM
};

enum ItemOfBrick
{
	ITEM_RANDOM = 0,
	ITEM_COIN = 1,
	ITEM_COIN_X10 = 2,
	ITEM_1_UP_MUSHROOM = 5,
	ITEM_P_SWITCH = 6,
};

#define MAX_COIN_OF_BRICK			10

#define STATE_PRESSED				250
#define P_SWITCH_BBBOX_SIDE_LENGTH	16
#define P_SWITCH_NORMAL_ANI			0
#define P_SWITCH_PRESSED_ANI		1
#define P_SWITCH_POS_X				2032
#define P_SWITCH_POS_Y				352

#define SUPER_LEAF_ANI_LEFT						0
#define SUPER_LEAF_ANI_RIGHT					1
#define SUPER_LEAF_BBOX_WIDTH					16
#define SUPER_LEAF_BBOX_HEIGHT					14
#define SUPER_LEAF_DEFLECT_SPEED_Y				1.0f
#define SUPER_LEAF_SPEED_Y						0.35f
#define SUPER_LEAF_POSITION_ADJUSTMENT_NUM_Y	7
#define SUPER_LEAF_MAX_DISTANCE_FROM_BRICK		32
#define SUPER_LEAF_RIGHT_LIMIT_FROM_BRICK		32
#define SUPER_LEAF_SPEED_X_FACTOR				0.3 //
#define SUPER_LEAF_NUM_TO_THE_POWER_OF_SPEED_Y	35	//

#define SUPER_MUSHROOM_BBOX_WIDTH		16
#define SUPER_MUSHROOM_BBOX_HEIGHT		16
#define SUPER_MUSHROOM_DEFLECT_SPEED_Y	0.03f
#define SUPER_MUSHROOM_SPEED_Y			0.25f
#define SUPER_MUSHROOM_SPEED_X			0.06f
#define SUPER_MUSHROOM_ANI				0
#define UP_MUSHROOM_ANI				1

#define ICE_FLOWER_BBOX_WIDTH			16
#define ICE_FLOWER_BBOX_HEIGHT			16
#define ICE_FLOWER_DEFLECT_SPEED_Y		0.3f

enum TypeOfBrickContainsItem
{
	QUESTION_BRICK = 1,
	DISGUISED_BRONZE_BRICK = 2,
};

// Pipe
#define PIPE_WIDTH				32
#define SHORT_PIPE_HEIGHT		32
#define MEDIUM_PIPE_HEIGHT		48
#define LONG_PIPE_HEIGHT		64
#define VERY_LONG_PIPE_HEIGHT	208

#define SHORT_PIPE_ANI						0
#define MEDIUM_PIPE_ANI						1
#define LONG_PIPE_ANI						2
#define VERY_LONG_PIPE_ANI					3
#define HIDDEN_PIPE_ANI						4
#define MEDIUM_PIPE_PAIR_WITH_LONG_ONE_ANI	5

enum TypeOfPipe
{
	SHORT_PIPE = 1,
	MEDIUM_PIPE = 2,
	LONG_PIPE = 3,
	VERY_LONG_PIPE = 4,
	HIDDEN_PIPE = 5,
	MEDIUM_PIPE_PAIR_WITH_LONG_ONE = 6,
};

// Effect
#define STATE_DESTROYED	99

#define HIT_EFFECT_TIME			150

#define	TAIL_HIT_EFFECT_TIME	100
#define	TAIL_HIT_EFFECT_WIDTH	16
#define	TAIL_HIT_EFFECT_HEIGHT	16

#define BROKEN_BRICK_PIECE_GRAVITY			0.0009f
#define BROKEN_BRICK_PIECE_WIDTH			8
#define	BROKEN_BRICK_PIECE_HEIGHT			8
#define	BROKEN_BRICK_PIECE_DEFLECT_SPEED_X	0.07f
#define	BROKEN_BRICK_PIECE_DEFLECT_SPEED_Y	0.16f

#define MONEY_EFFECT_100	0
#define MONEY_EFFECT_200	1
#define MONEY_EFFECT_400	2
#define MONEY_EFFECT_800	3
#define MONEY_EFFECT_1000	4
#define MONEY_EFFECT_2000	5
#define MONEY_EFFECT_4000	6
#define MONEY_EFFECT_8000	7
#define MONEY_EFFECT_1_UP	8

#define COIN_EFFECT_TIME					1300
#define COIN_EFFECT_SPEED_Y					0.14f
#define COIN_EFFECT_X_ADDEND				4
#define COIN_EFFECT_Y_SUBTRAHEND			14
#define COIN_EFFECT_MIN_Y_SUBTRAHEND		65
#define COIN_EFFECT_MAX_Y_SUBTRAHEND		20

#define MONEY_EFFECT_Y_AT_BRICK_SUBTRAHEND	3
#define MONEY_EFFECT_SPEED_Y				0.04f

// Weapon
#define FIREBALL_BBOX_WIDTH		8
#define FIREBALL_BBOX_HEIGHT	8
#define FIREBALL_SPEED			0.15f
#define FIREBALL_TO_RIGHT		0
#define FIREBALL_TO_LEFT		1

#define TAIL_BBOX_WIDTH			9
#define TAIL_BBOX_HEIGHT		6

// Mario
#define MARIO_RUNNING_SPEED						0.23f
#define MARIO_MAX_WALKING_SPEED					0.12f
#define MARIO_RUNNING_ACCELERATION				0.00015f
#define MARIO_WALKING_ACCELERATION				0.00015f
#define MARIO_SMALL_ACCELERATION_SUBTRAHEND		0.00025f
#define MARIO_LARGE_ACCELERATION_SUBTRAHEND		0.0005f
#define MARIO_LARGEST_ACCELERATION_SUBTRAHEND	0.0008f
#define INITIAL_LAST_Y							134.0f

#define MARIO_READY_TO_OUT_OF_PIPE_POS_Y		466.0f
#define MARIO_READY_TO_OUT_OF_PIPE_POS_X		2095.0f
#define MARIO_UNDER_TOP_OF_PIPE					112.0f
#define MARIO_UNDER_END_OF_PIPE					490.0f // 496.0f
#define MARIO_AT_HIDDEN_AREA_ENTRANCE			111
#define MARIO_GO_INTO_PIPE_SPEED_Y				0.03f
#define MARIO_OUT_OF_PIPE_SPEED_Y				0.08f
#define MARIO_READY_TO_OUT_OF_HIDDEN_AREA_POS_Y	383.0f
#define MARIO_READY_TO_OUT_OF_HIDDEN_AREA_POS_X	2319.0f

// Mario time limit
#define	MARIO_WAGGING_TAIL_TIME			150
#define	MARIO_SPINNING_TAIL_TIME		250
#define	MARIO_SHOOTING_FIREBALL_TIME	150
#define MARIO_FLYING_TIME				5000
#define MARIO_KICK_TIME					200
#define MARIO_LOW_JUMP_TIME				100

#define MARIO_IN_TOP_PIPE_1_COMPLETELY	495
#define MARIO_IN_TOP_PIPE_4_COMPLETELY	97
#define MARIO_OUT_TOP_PIPE_1_COMPLETELY	385
#define MARIO_OUT_TOP_PIPE_4_COMPLETELY	144

#define MARIO_HIGH_JUMP_SPEED_Y		0.275f
#define MARIO_LOW_JUMP_SPEED_Y		0.2f
#define MARIO_JUMP_DEFLECT_SPEED	0.1f
#define MARIO_GRAVITY				0.0006f
#define MARIO_LOW_JUMP_GRAVITY		0.001f
#define MARIO_FLY_GRAVITY			0.00035f
#define MARIO_WAGGING_GRAVITY		0.000035f
#define MARIO_FLY_ADDEND_GRAVITY	0.004f
#define MARIO_MAX_FLYING_SPEED_Y	0.13f
#define MARIO_DIE_DEFLECT_SPEED		0.5f
#define MARIO_FLY_SPEED_Y			0.25f

#define MARIO_SPEED_ON_MAP	0.1f

#define MARIO_STATE_IDLE			0
#define MARIO_STATE_WALKING_RIGHT	100
#define MARIO_STATE_WALKING_LEFT	200
#define MARIO_STATE_JUMP_LOW		300
#define MARIO_STATE_JUMP_HIGH		400
#define	MARIO_STATE_SIT_DOWN		500
#define MARIO_STATE_RUNNING_RIGHT	600
#define MARIO_STATE_RUNNING_LEFT	700
#define MARIO_STATE_FLYING			800
#define MARIO_STATE_STOP			900
#define MARIO_STATE_ATTACK			1000
#define MARIO_STATE_GO_INTO_PIPE	1100
#define MARIO_STATE_OUT_OF_PIPE		1200

#define MARIO_KICK							1111
#define MARIO_WAG_TAIL_WHILE_FALLING		1112
#define MARIO_WALKING_WHILE_HOLDING_SHELL	1113
#define MARIO_IDLE_WHILE_HOLDING_SHELL		1114
#define MARIO_ON_AIR_WHILE_HOLDING_SHELL	1115

#define MARIO_STATE_DIE				999

#define MARIO_ANI_BIG_IDLE_RIGHT				0
#define MARIO_ANI_BIG_WALKING_RIGHT				1
#define MARIO_ANI_BIG_RUNNING_RIGHT				2
#define MARIO_ANI_BIG_JUMP_RIGHT				3
#define MARIO_ANI_BIG_SITTING_RIGHT				4
#define MARIO_ANI_BIG_STOP_RIGHT				5
#define MARIO_ANI_BIG_FALLING_RIGHT				6
#define MARIO_ANI_BIG_KICK_RIGHT				67
#define	MARIO_ANI_BIG_IDLE_HOLD_SHELL_RIGHT		75
#define	MARIO_ANI_BIG_WALKING_HOLD_SHELL_RIGHT	76
#define	MARIO_ANI_BIG_ON_AIR_HOLD_SHELL_RIGHT	77
#define	MARIO_ANI_BIG_FLY_LOW_RIGHT				100

#define MARIO_ANI_BIG_IDLE_LEFT					7
#define MARIO_ANI_BIG_WALKING_LEFT				8
#define MARIO_ANI_BIG_RUNNING_LEFT				9
#define MARIO_ANI_BIG_JUMP_LEFT					10
#define MARIO_ANI_BIG_SITTING_LEFT				11
#define MARIO_ANI_BIG_STOP_LEFT					12
#define MARIO_ANI_BIG_FALLING_LEFT				13
#define MARIO_ANI_BIG_KICK_LEFT					68
#define	MARIO_ANI_BIG_IDLE_HOLD_SHELL_LEFT		78
#define	MARIO_ANI_BIG_WALKING_HOLD_SHELL_LEFT	79
#define	MARIO_ANI_BIG_ON_AIR_HOLD_SHELL_LEFT	80
#define	MARIO_ANI_BIG_FLY_LOW_LEFT				101

#define MARIO_ANI_SMALL_IDLE_RIGHT					14
#define MARIO_ANI_SMALL_WALKING_RIGHT				15
#define MARIO_ANI_SMALL_RUNNING_RIGHT				16
#define MARIO_ANI_SMALL_JUMP_RIGHT					17
#define MARIO_ANI_SMALL_STOP_RIGHT					18
#define MARIO_ANI_SMALL_KICK_RIGHT					69
#define MARIO_ANI_SMALL_IDLE_HOLD_SHELL_RIGHT		81
#define MARIO_ANI_SMALL_WALKING_HOLD_SHELL_RIGHT	82
#define MARIO_ANI_SMALL_ON_AIR_HOLD_SHELL_RIGHT		83
#define	MARIO_ANI_SMALL_FLY_LOW_RIGHT				102

#define MARIO_ANI_SMALL_IDLE_LEFT					19
#define MARIO_ANI_SMALL_WALKING_LEFT				20
#define MARIO_ANI_SMALL_RUNNING_LEFT				21
#define MARIO_ANI_SMALL_JUMP_LEFT					22
#define MARIO_ANI_SMALL_STOP_LEFT					23
#define MARIO_ANI_SMALL_KICK_LEFT					70
#define MARIO_ANI_SMALL_IDLE_HOLD_SHELL_LEFT		84
#define MARIO_ANI_SMALL_WALKING_HOLD_SHELL_LEFT		85
#define MARIO_ANI_SMALL_ON_AIR_HOLD_SHELL_LEFT		86
#define	MARIO_ANI_SMALL_FLY_LOW_LEFT				103

#define MARIO_RACCOON_ANI_IDLE_RIGHT					24
#define MARIO_RACCOON_ANI_WALK_RIGHT					25
#define MARIO_RACCOON_ANI_RUNNING_RIGHT					26
#define MARIO_RACCOON_ANI_JUMP_RIGHT					27
#define MARIO_RACCOON_ANI_STOP_RIGHT					28
#define MARIO_RACCOON_ANI_SPIN_TAIL_IDLE_RIGHT			29
#define MARIO_RACCOON_ANI_SITTING_RIGHT					30
#define MARIO_RACCOON_ANI_FALLING_RIGHT					31
#define MARIO_RACCOON_ANI_FALLING_WAG_TAIL_RIGHT		32
#define MARIO_RACCOON_ANI_FLYING_UP_RIGHT				33
#define MARIO_RACCOON_ANI_FLYING_DOWN_RIGHT				63
#define MARIO_RACCOON_ANI_WAG_TAIL_WHILE_FLYING_RIGHT	64
#define MARIO_RACCOON_ANI_KICK_RIGHT					71
#define MARIO_RACCOON_ANI_IDLE_HOLD_SHELL_RIGHT			87
#define MARIO_RACCOON_ANI_WALKING_HOLD_SHELL_RIGHT		88
#define MARIO_RACCOON_ANI_ON_AIR_HOLD_SHELL_RIGHT		89

#define MARIO_RACCOON_ANI_IDLE_LEFT						34
#define MARIO_RACCOON_ANI_WALK_LEFT						35
#define MARIO_RACCOON_ANI_RUNNING_LEFT					36
#define MARIO_RACCOON_ANI_JUMP_LEFT						37
#define MARIO_RACCOON_ANI_STOP_LEFT						38
#define MARIO_RACCOON_ANI_SPIN_TAIL_IDLE_LEFT			39			
#define MARIO_RACCOON_ANI_SITTING_LEFT					40
#define MARIO_RACCOON_ANI_FALLING_LEFT					41
#define MARIO_RACCOON_ANI_FALLING_WAG_TAIL_LEFT			42
#define MARIO_RACCOON_ANI_FLYING_UP_LEFT				43
#define MARIO_RACCOON_ANI_FLYING_DOWN_LEFT				65
#define MARIO_RACCOON_ANI_WAG_TAIL_WHILE_FLYING_LEFT	66
#define MARIO_RACCOON_ANI_KICK_LEFT						72
#define MARIO_RACCOON_ANI_IDLE_HOLD_SHELL_LEFT			90
#define MARIO_RACCOON_ANI_WALKING_HOLD_SHELL_LEFT		91
#define MARIO_RACCOON_ANI_ON_AIR_HOLD_SHELL_LEFT		92

#define MARIO_RACCOON_ANI_GO_PIPE						99

#define MARIO_FIRE_ANI_IDLE_RIGHT							44
#define MARIO_FIRE_ANI_WALK_RIGHT							45
#define MARIO_FIRE_ANI_RUNNING_RIGHT						46
#define MARIO_FIRE_ANI_JUMP_RIGHT							47
#define MARIO_FIRE_ANI_STOP_RIGHT							48
#define MARIO_FIRE_ANI_SHOOT_FIREBALL_RIGHT					49
#define MARIO_FIRE_ANI_SHOOT_FIREBALL_WHILE_JUMPING_RIGHT	50
#define MARIO_FIRE_ANI_SITTING_RIGHT						51
#define MARIO_FIRE_ANI_FALLING_RIGHT						52
#define MARIO_FIRE_ANI_KICK_RIGHT							73
#define MARIO_FIRE_ANI_IDLE_HOLD_SHELL_RIGHT				93
#define MARIO_FIRE_ANI_WALKING_HOLD_SHELL_RIGHT				94
#define MARIO_FIRE_ANI_ON_AIR_HOLD_SHELL_RIGHT				95
#define MARIO_FIRE_ANI_FLY_LOW_RIGHT						104

#define MARIO_FIRE_ANI_IDLE_LEFT							53
#define MARIO_FIRE_ANI_WALK_LEFT							54
#define MARIO_FIRE_ANI_RUNNING_LEFT							55
#define MARIO_FIRE_ANI_JUMP_LEFT							56
#define MARIO_FIRE_ANI_STOP_LEFT							57
#define MARIO_FIRE_ANI_SHOOT_FIREBALL_LEFT					58
#define MARIO_FIRE_ANI_SHOOT_FIREBALL_WHILE_JUMPING_LEFT	59
#define MARIO_FIRE_ANI_SITTING_LEFT							60
#define MARIO_FIRE_ANI_FALLING_LEFT							61
#define MARIO_FIRE_ANI_KICK_LEFT							74
#define MARIO_FIRE_ANI_IDLE_HOLD_SHELL_LEFT					96
#define MARIO_FIRE_ANI_WALKING_HOLD_SHELL_LEFT				97
#define MARIO_FIRE_ANI_ON_AIR_HOLD_SHELL_LEFT				98
#define MARIO_FIRE_ANI_FLY_LOW_LEFT							105

#define MARIO_ANI_DIE		62

#define MARIO_ON_OVERWORLD_MAP_ANI_SMALL	0
#define MARIO_ON_OVERWORLD_MAP_ANI_BIG		1
#define MARIO_ON_OVERWORLD_MAP_ANI_RACCOON	2
#define MARIO_ON_OVERWORLD_MAP_ANI_FIRE		3

#define MARIO_ON_OVERWORLD_MAP_SMALL_BBOX_ADDEND	1
#define MARIO_ON_OVERWORLD_MAP_BIG_BBOX_ADDEND		5
#define MARIO_ON_OVERWORLD_MAP_RACCOON_BBOX_ADDEND	8
#define MARIO_ON_OVERWORLD_MAP_BBOX_SIDE_LENGTH		16

#define	MARIO_LEVEL_SMALL	1
#define	MARIO_LEVEL_BIG		2
#define MARIO_RACCOON		3
#define MARIO_FIRE			4

#define MARIO_BBOX_HEIGHT				30
#define MARIO_SIT_BBOX_DIFFERENCE_NUM	12

#define MARIO_BIG_BBOX_WIDTH			15
#define MARIO_BIG_TOP_ADDEND			3
#define MARIO_BIG_LEFT_SUBTRAHEND_R		10
#define MARIO_BIG_LEFT_SUBTRAHEND_L		9

#define MARIO_SMALL_BBOX_WIDTH			14
#define MARIO_SMALL_TOP_ADDEND			14
#define MARIO_SMALL_LEFT_SUBTRAHEND_R	11
#define MARIO_SMALL_LEFT_SUBTRAHEND_L	9

#define MARIO_RACCOON_BBOX_WIDTH		15
#define MARIO_RACCOON_TOP_ADDEND		2
#define MARIO_RACCOON_LEFT_SUBTRAHEND_R	10
#define MARIO_RACCOON_LEFT_SUBTRAHEND_L	8

#define MARIO_UNTOUCHABLE_TIME 2000


// ENEMIES
#define ENEMY_STATE_ATTACKED_BY_TAIL			188  // lead to die or sleep
#define ENEMY_STATE_DIE_BY_WEAPON				199
#define ENEMY_STATE_MOVE						200
#define ENEMY_STATE_IDLE						201
#define ENEMY_DEFECT_SPEED_X_CAUSED_BY_TAIL		0.035f
#define ENEMY_DEFECT_SPEED_Y_CAUSED_BY_TAIL		0.28f

// Goomba
#define GOOMBA_MOVE_SPEED_X						0.035f
#define GOOMBA_DEFLECT_SPEED_Y					0.15f
#define GOOMBA_DEFLECT_SPEED_X					0.03f
#define GOOMBA_BBOX_WIDTH						16
#define GOOMBA_BBOX_HEIGHT						15
#define GOOMBA_BBOX_HEIGHT_DIE_BY_CRUSH			9
#define GOOMBA_ANI_MOVE							0
#define GOOMBA_ANI_DIE_BY_CRUSH					1
#define GOOMBA_ANI_DIE_BY_ATTACK_TOOL			2
#define GOOMBA_MAX_EXISTING_TIME_AFTER_DEATH	250

#define GOOMBA_STATE_DIE_BY_CRUSH				299
#define GOOMBA_STATE_FLY_LOW					298
#define GOOMBA_STATE_FLY_HIGH					297
#define GOOMBA_STATE_NORMAL						296

#define GOOMBA_GRAVITY							0.0006f
#define GOOMBA_HIGH_FLYING_GRAVITY				0.0004f

#define GOOMBA_LEFT_ADDEND						2
#define GOOMBA_TOP_ADDEND						8

// Paragoomba
#define RED_PARAGOOMBA_ANI_MOVE						0
#define RED_PARAGOOMBA_ANI_FLAP_WINGS_QUICKLY		1
#define	RED_PARAGOOMBA_ANI_FLAP_WINGS_SLOWLY		2
#define RED_PARAGOOMBA_ANI_MOVE_WHEN_LOSING_WINGS	3
#define RED_PARAGOOMBA_ANI_DIE_BY_CRUSH				4
#define RED_PARAGOOMBA_ANI_DIE_BY_ATTACK_TOOL		5

#define	GOOMBA_WALK_TIME							800
#define	GOOMBA_REDIRECTION_DELAY_TIME				300
#define	GOOMBA_INTERESTING_TIME						15000

#define GOOMBA_LOW_FLYING_DEFECT_SPEED_Y			0.07f
#define GOOMBA_HIGH_FLYING_DEFECT_SPEED_Y			0.16f

// Koopa
#define GREEN_PARAKOOPA_DEFLECT_SPEED_Y		0.22f
#define GREEN_PARAKOOPA_MOVE_SPEED_X		0.032f

#define RED_PARAKOOPA_MOVE_SPEED_Y			0.1f

#define PARAKOOPA_ANI_MOVE_RIGHT			9
#define PARAKOOPA_ANI_MOVE_LEFT				8

#define	KOOPA_THOWN_OUT_DX					6
#define KOOPA_SLEEP_TIME					8000
#define KOOPA_VIBRATION_TIME				3000
#define KOOPA_GRAVITY						0.00015f
#define KOOPA_MOVE_SPEED_X					0.025f
#define KOOPA_SPIN_AND_MOVE_SPEED_X			0.16f
#define KOOPA_DEFLECT_SPEED_Y				0.15f
#define KOOPA_DEFLECT_SPEED_X				0.03f
#define KOOPA_LEFT_ADDEND					1
#define KOOPA_BBOX_WIDTH					16
#define KOOPA_BBOX_HEIGHT					28
#define KOOPA_BBOX_HEIGHT_LAY_VIBRATE_SPIN	16
#define KOOPA_BBOX_WIDTH_VIBRATE			18
#define KOOPA_ANI_MOVE_RIGHT				0
#define KOOPA_ANI_MOVE_LEFT					1
#define KOOPA_ANI_LAY_PRONE					2
#define KOOPA_ANI_LAY_SUPINE				3
#define KOOPA_ANI_VIBRATE_PRONE				4
#define KOOPA_ANI_VIBRATE_SUPINE			5
#define KOOPA_ANI_SPIN_AND_MOVE_PRONE		6
#define KOOPA_ANI_SPIN_AND_MOVE_SUPINE		7
#define KOOPA_STATE_SPIN_AND_MOVE			80
#define KOOPA_STATE_BEING_HELD				81
#define KOOPA_STATE_NORMAL					82
#define KOOPA_STATE_VIBRATE					83

#define VIRTUAL_BOX_GRAVITY					0.0001f

// Fire Piranha
enum TypeOfFirePiranha
{
	RED = 1,
	GREEN = 2,
};

#define	FIRE_PIRANHA_STATE_MOVE_UP			10
#define	FIRE_PIRANHA_STATE_MOVE_DOWN		11
#define	FIRE_PIRANHA_STATE_ATTACK			12
#define FIRE_PIRANHA_MOVE_SPEED_Y			0.06f
#define FIRE_PIRANHA_MAX_Y					369

#define FIRE_PIRANHA_DELAY_TIME				1500
#define	FIRE_PIRANHA_DELAY_TO_ATTACK_TIME	700

#define FIRE_PIRANHA_ANI_FACE_UP_LEFT		0
#define FIRE_PIRANHA_ANI_FACE_DOWN_LEFT		1
#define FIRE_PIRANHA_ANI_FACE_UP_RIGHT		2
#define FIRE_PIRANHA_ANI_FACE_DOWN_RIGHT	3
#define FIRE_PIRANHA_ANI_ATTACK_UP_LEFT		4
#define FIRE_PIRANHA_ANI_ATTACK_DOWN_LEFT	5
#define FIRE_PIRANHA_ANI_ATTACK_UP_RIGHT	6
#define FIRE_PIRANHA_ANI_ATTACK_DOWN_RIGHT	7

#define RED_FIRE_PIRANHA_MIN_Y				336
#define RED_FIRE_PIRANHA_BBOX_WIDTH			16
#define RED_FIRE_PIRANHA_BBOX_HEIGHT		32
#define RED_FIRE_PIRANHA_FAR_LEFT_START		191
#define RED_FIRE_PIRANHA_NEAR_LEFT_START	296	
#define RED_FIRE_PIRANHA_NEAR_RIGHT_START	368	
#define RED_FIRE_PIRANHA_FAR_RIGHT_START	440	
#define RED_FIRE_PIRANHA_FAR_RIGHT_END		535
#define RED_FIRE_PIRANHA_SAFE_ZONE_LEFT		348
#define RED_FIRE_PIRANHA_SAFE_ZONE_RIGHT	387
#define RED_FIRE_PIRANHA_SAFE_ZONE_BOTTOM	415

#define GREEN_FIRE_PIRANHA_MIN_Y			344
#define GREEN_FIRE_PIRANHA_BBOX_WIDTH		16
#define GREEN_FIRE_PIRANHA_BBOX_HEIGHT		24
#define GREEN_FIRE_PIRANHA_FAR_LEFT_START	1728
#define GREEN_FIRE_PIRANHA_NEAR_LEFT_START	1802
#define GREEN_FIRE_PIRANHA_NEAR_RIGHT_START	1872
#define GREEN_FIRE_PIRANHA_FAR_RIGHT_START	1956	
#define GREEN_FIRE_PIRANHA_FAR_RIGHT_END	2012
#define GREEN_FIRE_PIRANHA_SAFE_ZONE_LEFT	1852
#define GREEN_FIRE_PIRANHA_SAFE_ZONE_RIGHT	1891
#define GREEN_FIRE_PIRANHA_SAFE_ZONE_BOTTOM	415

#define PIRANHA_MAX_EXISTING_TIME_AFTER_DEATH	500
#define PIRANHA_FIREBALL_SPEED_X				0.05f

enum class Area
{
	TOP_LEFT_FAR,
	TOP_LEFT_NEAR,
	TOP_RIGHT_FAR,
	TOP_RIGHT_NEAR,
	BOTTOM_LEFT_FAR,
	BOTTOM_LEFT_NEAR,
	BOTTOM_RIGHT_FAR,
	BOTTOM_RIGHT_NEAR,
	OUTSIDE_AREA,
};

// Green Piranha
#define	GREEN_PIRANHA_STATE_MOVE_UP			10
#define	GREEN_PIRANHA_STATE_MOVE_DOWN		11
#define GREEN_PIRANHA_BBOX_WIDTH			16
#define GREEN_PIRANHA_BBOX_HEIGHT			24
#define GREEN_PIRANHA_MOVE_SPEED_Y			0.06f
#define GREEN_PIRANHA_MAX_Y					385
#define GREEN_PIRANHA_MIN_Y					361
#define GREEN_PIRANHA_SAFE_ZONE_LEFT		1788
#define GREEN_PIRANHA_SAFE_ZONE_RIGHT		1827
#define GREEN_PIRANHA_SAFE_ZONE_BOTTOM		415

#define GREEN_PIRANHA_DELAY_TIME			820


// Floating Wood
#define STATE_FLOATING				88
#define STATE_SINKING				87
#define	FLOATING_WOOD_SPEED_X		0.03f
#define FLOATING_WOOD_SPEED_Y		0.1f
#define FLOATING_WOOD_BBOX_WIDTH	48
#define FLOATING_WOOD_BBOX_HEIGHT	16

// Boomerang Brother
#define BOOMERANG_BROTHER_BBOX_WIDTH				16
#define BOOMERANG_BROTHER_BBOX_HEIGHT				24
#define BOOMERANG_BROTHER_SPEED_X					0.035f
#define BOOMERANG_BROTHER_JUMP_SPEED_Y				0.14f
#define BOOMERANG_BROTHER_GRAVITY					0.0004f
#define BOOMERANG_BROTHER_LIMIT_X_RIGHT				2128
#define BOOMERANG_BROTHER_LIMIT_X_LEFT				2096
#define BOOMERANG_BROTHER_DEFLECT_SPEED_X_BY_TAIL	0.05f
#define BOOMERANG_BROTHER_DEFLECT_SPEED_Y_BY_TAIL	0.22f
#define BOOMERANG_BROTHER_DEFLECT_SPEED_X			0.04f
#define BOOMERANG_BROTHER_DEFLECT_SPEED_Y			0.17f

#define BOOMERANG_BROTHER_ANI_IDLE_RIGHT		0
#define BOOMERANG_BROTHER_ANI_MOVE_RIGHT		1
#define BOOMERANG_BROTHER_ANI_ATTACK_RIGHT		2
#define BOOMERANG_BROTHER_ANI_IDLE_LEFT			3
#define BOOMERANG_BROTHER_ANI_MOVE_LEFT			4
#define BOOMERANG_BROTHER_ANI_ATTACK_LEFT		5
#define BOOMERANG_BROTHER_ANI_DIE_RIGHT			6
#define BOOMERANG_BROTHER_ANI_DIE_LEFT			7

#define BOOMERANG_BROTHER_STATE_JUMP			11
#define BOOMERANG_BROTHER_STATE_DIE_BY_CRUSH	13

#define BOOMERANG_BROTHER_REST_TIME				300
#define BOOMERANG_COOLDOWN_TIME					1000
#define HURLING_SEC_BOOMERANG_DELAY_TIME		1500	
#define MIN_TURN_TO_JUMP						2
#define MAX_TURN_TO_JUMP						12

// Boomerang
#define BOOMERANG_BBOX_WIDTH				16
#define BOOMERANG_BBOX_HEIGHT				16
#define BOOMERANG_GRAVITY					0.00009f
#define BOOMERANG_ACCELERATION_TO_PULL_BACK	0.0002f
#define BOOMERANG_SPEED_X					0.12f
#define BOOMERANG_HURLING_SPEED_Y			0.07f
#define BOOMERANG_LIMIT_POS_Y_ADDEND		10
#define BOOMERANG_LIMIT_DX					95

#define BOOMERANG_POS_Y_SUBTRAHEND			5
#define BOOMERANG_POS_X_SUBTRAHEND			8
#define BOOMERANG_POS_X_ADDEND				9

#define BOOMERANG_ANI_MOVE_RIGHT			0
#define BOOMERANG_ANI_MOVE_LEFT				1
#define BOOMERANG_ANI_IDLE_RIGHT			2
#define BOOMERANG_ANI_IDLE_LEFT				3

#define BOOMERANG_STATE_HURLING				500

#define BOOMERANG_HURLING_DELAY_TIME		250


// PlayScene
#define SCENE_SECTION_UNKNOWN			-1
#define SCENE_SECTION_TEXTURES			2
#define SCENE_SECTION_SPRITES			3
#define SCENE_SECTION_ANIMATIONS		4
#define SCENE_SECTION_ANIMATION_SETS	5
#define SCENE_SECTION_OBJECTS			6
#define SCENE_SECTION_TILEMAP			7

#define MAX_SCENE_LINE 1024

// list of object type
enum class Type
{
	PORTAL = 55,
	MARIO = 0,
	BRICK_CONTAINS_ITEM = 1,
	YELLOW_GOOMBA = 2,
	RED_PARAGOOMBA = 3,
	FLOOR = 4,
	COLOR_BOX = 5,
	FIRE_PIRANHA = 6,
	GREEN_PIRANHA = 7,
	HAMMER = 8,
	FIREBALL = 9,
	TAIL = 10,
	BRONZE_BRICK = 11,
	PIPE = 12,
	SUPER_LEAF = 13,
	SUPER_MUSHROOM = 14,
	ICE_FLOWER = 15,
	COIN = 16,
	P_SWITCH = 17,
	UP_MUSHROOM = 18,
	RED_KOOPA = 19,
	GREEN_KOOPA = 20,
	GREEN_PARAKOOPA = 21,
	RED_PARAKOOPA = 27,
	RANDOM_ITEM_BOX = 22,
	TUSSOCK = 30,
	HELP_BUBBLE = 31,
	GATEKEEPER = 32,
	MAP_POINT = 51,
	BOOMERANG_BROTHER = 23,
	BOOMERANG = 24,
	FLOATING_WOOD = 25,
	CURTAIN = 40,
	CURSOR = 41,
	NUMBER_3 = 42,
	SMB3_LOGO = 43,
};

enum class Category
{
	PLAYER,
	ENEMY,
	MISC,
	ITEM,
	WEAPON,
	EFFECT,
	SCENE,
};

// HUD
#define	NUM_0	1010
#define	NUM_1	1011
#define	NUM_2	1012
#define	NUM_3	1013
#define	NUM_4	1014
#define	NUM_5	1015
#define	NUM_6	1016
#define	NUM_7	1017
#define	NUM_8	1018
#define	NUM_9	1019

enum class PowerMeter
{
	TIER_0,
	TIER_1,
	TIER_2,
	TIER_3,
	TIER_4,
	TIER_5,
	TIER_6,
	TIER_7,
};

#define SPEED_X_TIER_1	0.125f
#define SPEED_X_TIER_2	0.140f
#define SPEED_X_TIER_3	0.155f
#define SPEED_X_TIER_4	0.170f
#define SPEED_X_TIER_5	0.190f
#define SPEED_X_TIER_6	0.210f
#define SPEED_X_TIER_7	0.230f

#define MAX_PLAY_TIME		900
#define FLICKER_TIME		1000
#define GOT_CARD_DELAY_TIME	400

#define INITIAL_PLAYER_LIVES		4

#define HUD_POS_X_ADDEND			10
#define HUD_POS_Y_SUBTRAHEND		69

#define BLACK_BG_POS_Y_SUBTRAHEND	1

#define ITEM_BOX_SET_POS_X_ADDEND	163
#define ITEM_POS_X_ADDEND			4
#define ITEM_POS_Y_ADDEND			6
#define ITEM_SPACE_X				24

#define P_METER_POS_X				52
#define P_METER_POS_Y				7

#define NUMBER_WIDTH				8

#define WORLD_ID					1
#define WORLD_NUM_POS_X				37
#define WORLD_NUM_POS_Y				7
#define WORLD_NUM_MAX_SIZE			1

#define LIVES_NUM_POS_X				29
#define LIVES_NUM_POS_Y				15
#define LIVES_NUM_MAX_SIZE			2

#define SCORE_NUM_POS_X				52
#define SCORE_NUM_POS_Y				15
#define SCORE_NUM_MAX_SIZE			7

#define MONEY_NUM_POS_X				132
#define MONEY_NUM_POS_Y				7
#define MONEY_NUM_MAX_SIZE			2

#define TIME_REMAINING_NUM_POS_X	124
#define TIME_REMAINING_NUM_POS_Y	15
#define TIME_REMAINING_NUM_MAX_SIZE	3

#define NORMAL_STAR_ANI				0
#define FLICKER_STAR_ANI			1
#define NORMAL_MUSHROOM_ANI			2
#define FLICKER_MUSHROOM_ANI		3
#define NORMAL_FLOWER_ANI			4
#define FLICKER_FLOWER_ANI			5

#define COURSE_CLEAR_POS_X_ADDEND	58
#define COURSE_CLEAR_POS_Y_ADDEND	33
#define YOU_GOT_A_CARD_POS_Y_ADDEND	13
#define CARD_POS_X_ADDEND			128
#define CARD_POS_Y_ADDEND			11


// Camera
#define CAMERA_INITIAL_Y		238.0f
#define CAMERA_HIDDEN_AREA_Y	464.0f

// Screen
#define SCREEN_DIVISOR			2.8
#define COLOR_ADDEND_LEVEL_UP	1.4

// Random Item Box
enum class ItemOfBox
{
	STAR = 0,
	MUSHROOM = 1,
	FLOWER = 2,
	MAX_ITEM_TYPE_NUM,
};

#define ITEM_BBOX_WIDTH			6
#define ITEM_BBOX_HEIGHT		7
#define ITEM_POS_X_OFFSET		4
#define ITEM_POS_X				2689
#define ITEM_POS_Y				338
#define ITEM_CONVERSION_TIME	80

#define STATE_EMPTY				550

#define ITEM_BOX_STAR_ANI				0
#define ITEM_BOX_MUSHROOM_ANI			1
#define ITEM_BOX_FLOWER_ANI				2
#define ITEM_BOX_EMPTY_STAR_ANI			3
#define ITEM_BOX_EMPTY_MUSHROOM_ANI		4
#define ITEM_BOX_EMPTY_FLOWER_ANI		5

#define EMPTY_ITEM_SPEED_Y	0.1f

// Overworld map
#define MAP_POINT_Y_OFFSET					8

#define MAP_OBJECT_ANI_TUSSOCK				0
#define MAP_OBJECT_ANI_HELP_BUBBLE			1
#define MAP_OBJECT_ANI_GATEKEEPER_RIGHT		2
#define MAP_OBJECT_ANI_GATEKEEPER_LEFT		3

#define GATEKEEPER_SPEED_X		0.007f
#define GATEKEEPER_LEFT_LIMIT	153.0f
#define GATEKEEPER_RIGHT_LIMIT	168.0f

#define POINT_SIDE_LENGTH	4.0f
#define POINT_WIDTH			16
#define POINT_BBOX_ADDEND	6

#define ALLOWED_TO_GO_LEFT	0
#define ALLOWED_TO_GO_RIGHT	1
#define ALLOWED_TO_GO_UP	2
#define ALLOWED_TO_GO_DOWN	3

#define START_POINT_X	32
#define START_POINT_Y	56

//ItemOfBox operator++(ItemOfBox& item)
//{
//	item = static_cast<ItemOfBox>(((int)item + 1) % (int)ItemOfBox::MAX_ITEM_TYPE_NUM);
//	return item;
//}

// final
#define CAM_SPEED	0.03f