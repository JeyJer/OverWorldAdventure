#include "Player.h"

Player::Player( std::string name, Statistic stat, ClassType classType )
    : Character(name, stat), m_classType(m_classType)
{
}

Player::~Player()
{
}

Item** Player::getStuff()
{
    return this->m_stuff;
}

std::vector<int> Player::getListQuestCurrent()
{
    return this->m_lQuestCurrent;
}

std::vector<int> Player::getListQuestFinished()
{
    return this->m_lQuestFinished;
}

std::vector<int> Player::getListSkill()
{
    return this->m_lSkill;
}
