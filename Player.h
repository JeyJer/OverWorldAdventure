#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
#include <vector>

#include "Character.h"
#include "Skill.h"
#include "Item.h"
#include "ClassType.h"

#define LENGTH_ITEM 7

class Player : public Character
{
private:
    ClassType m_classType;
    Item* m_stuff[7];
    std::vector<int> m_lSkill;
    std::vector<int> m_lQuestCurrent;
    std::vector<int> m_lQuestFinished;
public:
    Player( std::string name, Statistic stat, ClassType classType );
    ~Player();
    void addSkill(int id);
    void wearStuff(int id);
    void addStat(Item* item);
    void removeStat(Item* item);
    void showState() const;
    void dispSkills() const;
    void dispStuff() const;
    void dispQuestJournal() const;
    Item** getStuff();
    std::vector<int> getListQuestCurrent();
    std::vector<int> getListQuestFinished();
    std::vector<int> getListSkill();
};

#endif // PLAYER_H_INCLUDED
