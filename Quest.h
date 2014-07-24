#ifndef QUEST_H_INCLUDED
#define QUEST_H_INCLUDED

#include <string>

#include "Trigger.h"
#include "Reward.h"

class Quest
{
private:
    int m_id;
    std::string m_intro;
    std::string m_sumUp;
    std::string m_endUp;
    Reward m_reward;
    Trigger m_trigger;
public:
    Quest( int id, std::string intro, std::string sumUp, std::string endUp, Reward reward, Trigger trigger );
    ~Quest();
    std::string disp(bool isDone);
    int getId();
    std::string getIntro();
    std::string getSumUp();
    std::string getEndUp();
    Reward getReward();
    Trigger getTrigger();
};

#endif // QUEST_H_INCLUDED
