#include <iostream>
#include <cstdlib>

#include "Trigger.h"
#include "Utils.h"
#include "ObjectList.h"
#include "Player.h"
#include "Mob.h"

std::string getStringTrigger( Trigger trigger )
{
    switch( trigger.action )
    {
        case KILL_MOB :
            return "Tuez le monstre " + ObjectList::lMob.at(trigger.value)->getName() + '.';
        case MORE_LIFE :
            return "Avoir plus de " + typeToString<int>(trigger.value) + "PV.";
        default :
            std::cout << "Champs interdit, préférez les parkings SVP (hahahahaaaa...)";
            std::exit( 15 );
    }
}

void checkLifeAction( Player* player )
{
    for( unsigned int i = 0; i < player->getListQuestCurrent().size(); ++i )
    {
        if( player->getListQuestCurrent().at(i)->getTrigger().action == MORE_LIFE )
        {
            if( player->getListQuestCurrent().at(i)->getTrigger().value < player->getStatistic().life )
            {
                player->finishQuest( player->getListQuestCurrent().at(i) );
            }
        }
    }
}

void checkKillMobAction( Player* player, Mob& mob )
{
    for( unsigned int i = 0; i < player->getListQuestCurrent().size(); ++i )
    {
        if( player->getListQuestCurrent().at(i)->getTrigger().action == KILL_MOB )
        {
            if( player->getListQuestCurrent().at(i)->getTrigger().value == mob.getId() )
            {
                player->finishQuest( player->getListQuestCurrent().at(i) );
            }
        }
    }
}
