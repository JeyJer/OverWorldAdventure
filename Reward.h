#ifndef REWARD_H_INCLUDED
#define REWARD_H_INCLUDED

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

#endif // REWARD_H_INCLUDED
