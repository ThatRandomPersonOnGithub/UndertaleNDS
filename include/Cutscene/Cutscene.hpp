//
// Created by cervi on 29/08/2022.
//

#ifndef UNDERTALE_CUTSCENE_HPP
#define UNDERTALE_CUTSCENE_HPP

class Cutscene;

#define ARM9
#include <nds.h>
#include <stdio.h>
#include "Navigation.hpp"
#include "Waiting.hpp"
#include "CutsceneEnums.hpp"
#include "Dialogue.hpp"
#include "Engine/BGM.hpp"
#include "Save.hpp"
#include "Battle/Battle.hpp"
#include "Battle/BattleAttack.hpp"

class Cutscene {
public:
    explicit Cutscene(uint16_t cutsceneId_);
    static bool checkHeader(FILE *f);
    bool runCommands(CutsceneLocation callingLocation);
    bool runCommand(CutsceneLocation callingLocation);
    uint16_t cutsceneId;
private:
    Waiting waiting;
    bool flag = false;
    FILE* commandStream = nullptr;
    long commandStreamLen = 0;
};

extern Cutscene* globalCutscene;

#endif //UNDERTALE_CUTSCENE_HPP
