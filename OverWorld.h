#ifndef OVERWORLD_H_INCLUDED
#define OVERWORLD_H_INCLUDED

#include "Player.h"

class OverWorld
{
private:
    Player* m_player;
    void loadSkill();
    void loadItem();
    void loadQuest();
    void loadMob();
public:
    OverWorld();
    ~OverWorld();
    void run();
};

#endif // OVERWORLD_H_INCLUDED
