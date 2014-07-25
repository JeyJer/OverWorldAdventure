#include "Mob.h"

Mob::Mob( int id, std::string name, Statistic stat, Skill* skill, Reward reward )
    : m_id( id ), Character(name, stat), m_skill( skill ), m_reward( reward )
{
}

Mob::~Mob()
{
}

void Mob::addSkill(int id)
{
}

int Mob::getId()
{
    return this->m_id;
}

Skill* Mob::getSkill()
{
    return this->m_skill;
}

Reward Mob::getReward()
{
    return this->m_reward;
}
