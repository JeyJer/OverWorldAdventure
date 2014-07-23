#ifndef QUEST_H_INCLUDED
#define QUEST_H_INCLUDED

#include <string>

#include "Reward.h"
#include "Trigger.h"

class Quest
{
private:
    std::string m_intro;
    std::string m_sumUp;
    std::string m_endUp;
    Reward m_reward;
    Trigger m_trigger;
public:
    Quest( std::string intro, std::string sumUp, std::string endUp, Reward reward, Trigger trigger );
    ~Quest();
    std::string getIntro();
    std::string getSumUp();
    std::string getEndUp();
    Reward getReward();
    Trigger getTrigger();
};

#endif // QUEST_H_INCLUDED
