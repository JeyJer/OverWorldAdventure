#include "OverWorld.h"

OverWorld::OverWorld()
{
    std::cout << "Selectionnez un nom de personnage...\n";
    std::string name;
    std::cin >> name;

    int classChoice;
    do
    {
        std::cout << "Selectionnez une classe...\n" <<
            "\t1. Guerrier\n" <<
            "\t2. Magicien\n";
        std::cin >> classChoice;

        if( classChoice != 1 && classChoice != 2 )
            std::cout << "Veuillez choisir 1 ou 2.";

    } while( classChoice != 1 && classChoice != 2 );

    Statistic stat;
    switch(classChoice)
    {
        case WARRIOR :
            stat.life = 100;
            stat.mana = 0;
            stat.physicalAtt = 25;
            stat.physicalDef = 50;
            stat.magicalAtt = 0;
            stat.magicalDef = 25;
            break;

        case MAGICIAN :
            stat.life = 75;
            stat.mana = 0;
            stat.physicalAtt = 0;
            stat.physicalDef = 40;
            stat.magicalAtt = 40;
            stat.magicalDef = 70;
            break;

        default :
            std::cout << "Choix de classe inconnu... Erreur fatale...\n\n";
            std::exit(0);
    }

    m_player = new Player( name, stat, ((classChoice==1)?WARRIOR:MAGICIAN) );
}

OverWorld::~OverWorld()
{
    delete m_player;
    m_player = 0;
}

void OverWorld::run()
{
}
