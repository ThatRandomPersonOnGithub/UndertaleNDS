#ifndef LAYTON_ENGINE_HPP
#define LAYTON_ENGINE_HPP

#define ARM9
#include <nds.h>
#include <gl2d.h>
#include <filesystem.h>
#include "Background.hpp"
#include "Font.hpp"
#include "BGM.hpp"
#include "math.hpp"
#include "Sprite3DManager.hpp"
#include <maxmod9.h>

namespace Engine {
    int init();
    void tick();
    int loadBgTextMain(Background& f);
    int loadBgTextSub(Background& f);
    int loadBgTextEngine(Background& bg, vu16* bg3Reg, u16* paletteRam,
                         u16* tileRam, u16* mapRam);
    int loadBgExtendedMain(Background& f, int forceSize);
    int loadBgExtendedSub(Background& f, int forceSize);
    int loadBgExtendedEngine(Background& bg, vu16* bg3Reg, u16* paletteRam,
                             u16* tileRam, u16* mapRam,
                             vs16* reg3A, vs16* reg3B,
                             vs16* reg3C, vs16* reg3D,
                             int forceSize);

    int loadBgRectMain(Background& bg, int x, int y, int w, int h);
    int loadBgRectSub(Background& bg, int x, int y, int w, int h);
    int loadBgRectEngine(Background& bg, const vu16* bg3Reg, u16* tileRam, u16* mapRam,
                         int x, int y, int w, int h);
    void clearMain();
    void clearSub();
    void clearEngine(vu16* bg3Reg, u16* tileRam, u16* mapRam);
}

#endif