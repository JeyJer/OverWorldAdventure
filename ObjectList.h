#ifndef OBJECTLIST_H_INCLUDED
#define OBJECTLIST_H_INCLUDED

#include <vector>

#include "Skill.h"
#include "Item.h"

class ObjectList
{
public:
    static std::vector<Skill> lSkill;
    static std::vector<Item*> lItem;
};

#endif // OBJECTLIST_H_INCLUDED
