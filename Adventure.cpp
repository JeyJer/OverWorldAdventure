#include "Adventure.h"

bool isRandInit = false;

void nextRide(Player* player)
{

    int rand = getRandomNumber(0, 99);
    std::cout << "\n[GAME] RAND = " << rand;
    if( rand <= 50 && !player->isFullStuff() )
    {
        std::cout << "\nVous trouvez un item au sol!!";
        int minimum, maximum;
        switch( player->getClassType() )
        {
            case WARRIOR :
                minimum = 0;
                maximum = 6;
                break;

            case MAGICIAN :
                minimum = 7;
                maximum = 13;
                break;

            default :
                std::cout << "THE LAST PLEASEEEEE....";
                std::exit(20);
        }

        do
        {
            int nbr = getRandomNumber( minimum, maximum );
            int slot;
            if( player->getClassType() == MAGICIAN )
            {
                slot = nbr - 7;
            }
            else
            {
                slot = nbr;
            }
            if( player->getStuff()[slot] == 0 )
            {
                player->wearStuff( nbr );
                break;
            }
            else
            {
                std::cout << "\n[GAME] NBR = " << nbr;
                continue;
            }
        } while( true );
    }
    else if( rand > 51 && rand <= 80 && ObjectList::lQuest.size() > 0 && !player->isFullStuff() )
    {
        std::cout << "\n*Une quete se presente a vous...*\n\n";
        int questIndex = getRandomNumber(0, (int)ObjectList::lQuest.size()-1);
        Quest* quest = ObjectList::lQuest.at( questIndex );
        std::cout << quest->getIntro() << "\n\nAcceptez-vous la quete ?\n" <<
            "\t1. Oui, je suis un HOMME UN VRAI BORDEL DE MERDE !!!\n"
            "\t2. Non, je suis pire qu'un putain d'homosexuel !!\n";
        int choice;
        do
        {
            std::cin >> choice;

            if( choice != 1 && choice != 2 )
                std::cout << "\nChoisissez entre 1 et 2 svp et faites pas chier...\n";

        } while( choice != 1 && choice != 2 );

        if( choice == 1 )
        {
            ObjectList::lQuest.erase( ObjectList::lQuest.begin() + questIndex );
            player->addQuest( quest );
        }
    }
    else
    {
        return;
        if( player->isFullStuff() )
        {
            fight( player, 0 );
        }
        else
        {
            fight( player, ObjectList::lMob.at(getRandomNumber( 1, (int)ObjectList::lMob.size()-1 )) );
        }
    }
}

int getRandomNumber(int minimum, int maximum)
{
    if( !isRandInit )
    {
        std::cout << "\n[GAME SINGLETON] Init random...\n";
        srand(time(NULL));
        isRandInit = true;
    }

    ++maximum;
    return (rand() % (maximum-minimum) + minimum );
}

void fight( Player* player, Mob* mob )
{
    // TODO BASTOOOOOOOOOOOOOOOOOOOOOOOOOOOON
}
