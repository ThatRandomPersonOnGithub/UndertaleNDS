//
// Created by cervi on 28/08/2022.
//

#ifndef LAYTON_SPRITEMANAGER_HPP
#define LAYTON_SPRITEMANAGER_HPP

#define ARM9
#include <nds.h>
#include "Sprite.hpp"

namespace Engine {
    struct SpriteManager {
        uint8_t frameCount = 0;
        uint8_t animCount = 0;
        CSPRAnimation* animations = nullptr;
        int currentFrame = -1;
        int currentAnimation = -1;
        uint16_t currentAnimationTimer = 0;
        uint16_t currentAnimationFrame = 0;
        uint8_t oamEntryCount = 0;
        union {
            uint8_t * oamEntries = nullptr;
            uint16_t tileStart;
        };
        uint8_t* tileData = nullptr;
        uint8_t tileWidth = 0, tileHeight = 0;
        uint16_t allocX = 0, allocY = 0;
        uint8_t colorCount = 0;
        union {
            uint8_t *paletteColors = nullptr;
            uint8_t paletteIdx;
        };
    };
}

#endif //LAYTON_SPRITEMANAGER_HPP