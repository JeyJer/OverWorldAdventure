#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <vector>

#include "Character.h"
#include "Skill.h"
#include "Item.h"
#include "ClassType.cpp"

class Player : public Character
{
private:
    ClassType m_classType;
    Item* m_stuff[];
    std::vector<int> m_lSkill;
    std::vector<int> m_lQuestCurrent;
    std::vector<int> m_lQuestFinished;
public:
    Player( std::string name, Statistic stat, ClassType classType );
    ~Player();
    Item** getStuff();
    std::vector<int> getListQuestCurrent();
    std::vector<int> getListQuestFinished();
    std::vector<int> getListSkill();
};

#endif // PLAYER_H_INCLUDED
