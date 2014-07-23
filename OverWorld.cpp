#include "OverWorld.h"

OverWorld::OverWorld()
{
    std::cout << "\nChoisissez un nom de personnage...\n";
    std::string name;
    std::cin >> name;

    int classChoice;
    do
    {
        std::cout << "\nSelectionnez une classe...\n" <<
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
            stat.mana = 200;
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
    bool loopAgain = true;
    int action;
    do
    {
        std::cout << "\nQue voulez-vous faire ?\n" <<
            "\t1. Se promener dans les bois (et t aC con pr y aler tt seul? bouffooooonn),\n" <<
            "\t2. Consulter l'etat de son personnage,\n" <<
            "\t3. Voir ses competences,\n" <<
            "\t4. Examiner son stuff,\n" <<
            "\t5. Lire son journal de quete,\n" <<
            "\t6. Chanter une chanson d'amour,\n" <<
            "\t7. Donner son avis sur la pornolitique,\n" <<
            "\t8. Quitter cette aventure epic qui m'a beaucoup distrait je l'avoue.\n";

        std::cin >> action;

        if( action < 1 || action > 8 )
        {
            std::cout << "Veuillez choisir un nombre entre 1 et 7.";
        }
        else
        {
            switch(action)
            {
                case 1 :
                    // TODO BASTOOOOOOOOOOOOOON
                    break;
                case 2 :
                    m_player->showState();
                    break;
                case 3 :
                    m_player->dispSkills();
                    break;
                case 4 :
                    m_player->dispStuff();
                    break;
                case 5 :
                    m_player->dispQuestJournal();
                    break;
                case 6 :
                    std::cout << "\n\tJ'aime la chatte et le pate,\n" <<
                        "\tLave-toi les dents avec mon gland,\n" <<
                        "\tPose ta chatte sur ma moustache,\n" <<
                        "\tTout le monde a poil et on se caresse.\n";
                    break;
                case 7 :
                    std::cout << "\nDepuis que l'envie,\nA digerer la honte,\n" <<
                        "Le nombril de la bete,\nEt le centre du monde,\n\n" <<
                        "MANGEZ-LUI LA TETE,\nMANGEEEEZ-LUUIII LAAA TETEEEEEEEEEEEEE !!!!\n";
                    break;
                case 8 :
                    loopAgain = false;
                    std::cout << std::endl;
                    break;
                default :
                    std::cout << "Action inconnue... Erreur fatale...\n\n";
                    std::exit(2);
            }
        }

    } while( loopAgain );
}
