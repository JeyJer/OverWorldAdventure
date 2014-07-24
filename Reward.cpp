#include "Reward.h"
#include "ObjectList.h"

std::string getStringReward( Reward reward )
{
    switch( reward.rewardType )
    {
        case LIFE :
            return "+" + typeToString<int>(reward.value) + "PV";
        case ITEM :
            return ObjectList::lItem.at(reward.value)->disp();
        case ATTACK :
            return "+" + typeToString<int>(reward.value) + "Att";
        case DEFENSE :
            return "+" + typeToString<int>(reward.value) + "Def";
        default :
            std::cout << "Pffffff...";
            std::exit( 16 );
    }
}
