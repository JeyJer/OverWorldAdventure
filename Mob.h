#ifndef MOB_H_INCLUDED
#define MOB_H_INCLUDED

#include "Item.h"
#include "Reward.h"
#include "Character.h"

class Mob : public Character
{
private:
    Skill* m_skill;
    Reward m_reward;
public:
    Mob( std::string name, Statistic stat, Skill* skill, Reward reward );
    ~Mob();
    Skill* getSkill();
    Reward getReward();
};

#endif // MOB_H_INCLUDED
