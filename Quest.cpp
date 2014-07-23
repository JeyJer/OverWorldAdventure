#include "Quest.h"

Quest::Quest( int id, std::string intro, std::string sumUp, std::string endUp, Reward reward, Trigger trigger )
    : m_id( id ), m_intro( intro ), m_sumUp( sumUp ), m_endUp( endUp ), m_reward( reward ), m_trigger( trigger )
{
}

Quest::~Quest()
{
}

int Quest::getId()
{
    return this->m_id;
}

std::string Quest::getIntro()
{
    return this->m_intro;
}

std::string Quest::getSumUp()
{
    return this->m_sumUp;
}

std::string Quest::getEndUp()
{
    return this->m_endUp;
}

Reward Quest::getReward()
{
    return this->m_reward;
}

Trigger Quest::getTrigger()
{
    return this->m_trigger;
}
