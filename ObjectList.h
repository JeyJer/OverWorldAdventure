#ifndef OBJECTLIST_H_INCLUDED
#define OBJECTLIST_H_INCLUDED

#include <vector>

#include "Skill.h"
#include "Item.h"
#include "Quest.h"
#include "Mob.h"

class ObjectList
{
public:
    static std::vector<Skill*> lSkill;
    static std::vector<Item*> lItem;
    static std::vector<Quest*> lQuest;
    static std::vector<Mob*> lMob;
};

#endif // OBJECTLIST_H_INCLUDED
