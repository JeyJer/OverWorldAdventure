#include "Mob.h"

Mob::Mob( std::string name, Statistic stat, Skill* skill, Reward reward )
    : Character(name, stat), m_skill( skill ), m_reward( reward )
{
}

Mob::~Mob()
{
}

Skill* Mob::getSkill()
{
    return this->m_skill;
}

Reward Mob::getReward()
{
    return this->m_reward;
}
