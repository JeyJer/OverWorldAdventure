#ifndef OVERWORLD_H_INCLUDED
#define OVERWORLD_H_INCLUDED

#include <iostream>
#include <string>
#include <cstdlib>

#include "Character.h"
#include "Mob.h"
#include "Player.h"

class OverWorld
{
private:
    Player* m_player;
public:
    OverWorld();
    ~OverWorld();
    void run();
};

#endif // OVERWORLD_H_INCLUDED
