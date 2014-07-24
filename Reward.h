#ifndef REWARD_H_INCLUDED
#define REWARD_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <string>

#include "Utils.h"
#include "ObjectList.h"

enum RewardType
{
    LIFE = 0,
    ITEM = 1,
    ATTACK = 2,
    DEFENSE = 3
};

struct Reward
{
    Reward( RewardType rwdTp, int val )
        : rewardType( rwdTp ), value( val ) {}
    RewardType rewardType;
    int value; // id or amount
};

std::string getStringReward( Reward reward );

#endif // REWARD_H_INCLUDED
