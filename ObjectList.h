#ifndef OBJECTLIST_H_INCLUDED
#define OBJECTLIST_H_INCLUDED

#include <vector>

#include "Quest.h"
#include "Skill.h"
#include "Item.h"

class ObjectList
{
public:
    static std::vector<Skill> lSkill;
    static std::vector<Item*> lItem;
    static std::vector<Quest*> lQuest;
};

#endif // OBJECTLIST_H_INCLUDED
