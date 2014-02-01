#pragma once

#include "common.h"
#include "SpriteObjects.h"
#include "TileTree.h"

enum enumFloorSprites {
    SPRITEFLOOR_NA = 0,
    SPRITEOBJECT_FLOOR_NA = 3,
    SPRITEFLOOR_CUTOFF = 4,
    SPRITEFLOOR_WATERFLOOR = 5,
    SPRITEFLOOR_SNOW = 6,
};

enum enumObjectSprites {
    SPRITEOBJECT_NA = 0,
    SPRITEOBJECT_BLACK = 1,
    SPRITEOBJECT_BLANK = 1,

    SPRITEOBJECT_TREE_OK = 40,
    SPRITEOBJECT_TREE_DEAD = 43,
    SPRITEOBJECT_SAPLING_OK = 41,
    SPRITEOBJECT_SAPLING_DEAD = 44,
    SPRITEOBJECT_SHRUB_OK = 42,
    SPRITEOBJECT_SHRUB_DEAD = 45,

    SPRITEOBJECT_WATERLEVEL1_LAVA = 120,
    SPRITEOBJECT_WATERLEVEL2_LAVA = 121,
    SPRITEOBJECT_WATERLEVEL3_LAVA = 122,
    SPRITEOBJECT_WATERLEVEL4_LAVA = 123,
    SPRITEOBJECT_WATERLEVEL5_LAVA = 124,
    SPRITEOBJECT_WATERLEVEL6_LAVA = 125,
    SPRITEOBJECT_WATERLEVEL7_LAVA = 126,
    SPRITEOBJECT_WATERLEVEL1 = 127,
    SPRITEOBJECT_WATERLEVEL2 = 128,
    SPRITEOBJECT_WATERLEVEL3 = 129,
    SPRITEOBJECT_WATERLEVEL4 = 130,
    SPRITEOBJECT_WATERLEVEL5 = 131,
    SPRITEOBJECT_WATERLEVEL6 = 132,
    SPRITEOBJECT_WATERLEVEL7 = 133,

    SPRITEOBJECT_WALL_NA = 200,

    SPRITEOBJECT_CURSORZONE = 320,
    SPRITEOBJECT_BLUEPRINT = 321,
    SPRITEOBJECT_STOCKPILE = 322,
    SPRITEOBJECT_CURSOR = 323,

};

enum TileIDs {

    ID_STONE_FORTIFICATION = 65,
    ID_STONE_WALL_RD2 = 307,
    ID_CNSTFLOOR = 493,
    ID_CNSTFORTIFICATION = 494,

    ID_CNSTR_STAIR_UPDOWN = 515,
    ID_CNSTR_STAIR_DOWN = 516,
    ID_CNSTR_STAIR_UP = 517,
    ID_CNSTR_RAMP = 518,

};

// returns appropriate t_SpriteWithOffset,
// or one with sheetIndex == INVALID_INDEX if none found
c_sprite * GetWallSpriteMap(int in, t_matglossPair material, uint16_t form);
c_sprite * GetFloorSpriteMap(int in, t_matglossPair material, uint16_t form);
c_sprite * GetWallDesignationSpriteMap(int in, t_matglossPair material, uint16_t form);
c_sprite * GetFloorDesignationSpriteMap(int in, t_matglossPair material, uint16_t form);
c_tile_tree * GetTreeVegetation( df::tiletype_shape shape, df::tiletype_special special, int index);

