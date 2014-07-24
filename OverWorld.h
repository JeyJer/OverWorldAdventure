#ifndef OVERWORLD_H_INCLUDED
#define OVERWORLD_H_INCLUDED

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

#include "Mob.h"
#include "Player.h"
#include "ObjectList.h"
#include "Character.h"
#include "Quest.h"

class OverWorld
{
private:
    Player* m_player;
    void loadSkill();
    void loadItem();
    void loadQuest();
    void loadMob();
public:
    OverWorld();
    ~OverWorld();
    void run();
};

#endif // OVERWORLD_H_INCLUDED
