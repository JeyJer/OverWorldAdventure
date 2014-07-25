#ifndef MOB_H_INCLUDED
#define MOB_H_INCLUDED

#include "Statistic.h"
#include "Reward.h"
#include "Character.h"

class Skill;

class Mob : public Character
{
private:
    int m_id;
    Skill* m_skill;
    Reward m_reward;
public:
    Mob( int id, std::string name, Statistic stat, Skill* skill, Reward reward );
    ~Mob();
    void addSkill(int id);
    int getId();
    Skill* getSkill();
    Reward getReward();
};

#endif // MOB_H_INCLUDED
