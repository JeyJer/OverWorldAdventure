#ifndef OVERWORLD_H_INCLUDED
#define OVERWORLD_H_INCLUDED

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

#include "Statistic.h"
#include "ClassType.h"
#include "SkillEffect.h"
#include "Reward.h"
#include "Trigger.h"
#include "ObjectList.h"

class Player;
class Skill;
class Item;
class Quest;

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
