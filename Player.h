#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
#include <vector>

#define LENGTH_ITEM 7



class Player : public Character
{
private:
    ClassType m_classType;
    Item* m_stuff[7];
    int m_stuffNbr;
    std::vector<int> m_lSkill;
    std::vector<Quest*> m_lQuestCurrent;
    std::vector<Quest*> m_lQuestFinished;
    void getQuestReward(Quest* quest);
    void addStat(Item* item);
    void removeStat(Item* item);
public:
    Player( std::string name, Statistic stat, ClassType classType );
    ~Player();
    void addSkill(int id);
    void wearStuff(int id);
    bool inline canWearItem(int id);
    void addQuest(Quest* quest);
    void finishQuest(Quest* quest);
    void showState() const;
    void dispSkills() const;
    void dispStuff() const;
    void dispQuestJournal() const;
    Item** getStuff();
    ClassType getClassType();
    std::vector<Quest*> getListQuestCurrent();
    std::vector<Quest*> getListQuestFinished();
    std::vector<int> getListSkill();
    bool isFullStuff();
};

#endif // PLAYER_H_INCLUDED
