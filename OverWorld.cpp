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
            stat.mana = 700;
            stat.physicalAtt = 0;
            stat.physicalDef = 40;
            stat.magicalAtt = 40;
            stat.magicalDef = 70;
            break;

        default :
            std::cout << "Choix de classe inconnu... Erreur fatale...\n\n";
            std::exit(0);
    }

    this->loadSkill();
    this->loadItem();


    if( classChoice == 1 )
    {
        m_player = new Player( name, stat, WARRIOR );
        m_player->addSkill(0);
    }
    else if( classChoice == 2 )
    {
        m_player = new Player( name, stat, MAGICIAN );
        m_player->addSkill(1);
        m_player->addSkill(2);
    }
    else
    {
        std::cout << "ULTRA FATAL ERROR DE CLASSE..." << classChoice;
        std::exit(5);
    }

    // ############# TEST LINEEEEEEEEEEEEEEE ##
    m_player->wearStuff( 7 );
    m_player->wearStuff( 8 );
    m_player->wearStuff( 9 );
    m_player->wearStuff( 10 );
    m_player->wearStuff( 11 );
    m_player->wearStuff( 12 );
    m_player->wearStuff( 13 );
    m_player->wearStuff( 13 );
}

OverWorld::~OverWorld()
{
    delete m_player;
    m_player = 0;
}

void OverWorld::loadSkill()
{
    ObjectList::lSkill.push_back( Skill(0, "Fracasse-Crane", WARRIOR, MAG_ATT, 5) );
    ObjectList::lSkill.push_back( Skill(1, "Colere de tempete", MAGICIAN, MAG_ATT, 10) );
    ObjectList::lSkill.push_back( Skill(2, "Ferveur de soin", MAGICIAN, HEAL, 20) );
}

void OverWorld::loadItem()
{
    // WARRIOR ITEM
    ObjectList::lItem.push_back(
        new Item(0, "Tete de Grizzly Supersonic", WARRIOR, HELMET, {20,0,3,2,0,5})
    );
    ObjectList::lItem.push_back(
        new Item(1, "Cuirasse de Fulgrad Demoniaque", WARRIOR, ARMOR, {30,0,0,20,0,10})
    );
    ObjectList::lItem.push_back(
        new Item(2, "Solerets du Seigneur de Guerre", WARRIOR, BOOTS, {20,0,3,4,0,2})
    );
    ObjectList::lItem.push_back(
        new Item(3, "Bouclier en peau de Tank", WARRIOR, LEFT, {30,0,0,30,0,15})
    );
    ObjectList::lItem.push_back(
        new Item(4, "Double Masse d'Arme de la Mort", WARRIOR, RIGHT, {0,0,14,0,0,0})
    );
    ObjectList::lItem.push_back(
        new Item(5, "Bague de l'Immortel", WARRIOR, RING, {150,0,0,2,0,4})
    );
    ObjectList::lItem.push_back(
        new Item(6, "Amulette de Bellesetpute", WARRIOR, AMULET, {150,0,0,2,0,4})
    );

    // MAGICIAN ITEM
    ObjectList::lItem.push_back(
        new Item(7, "Coiffe des tempetes", MAGICIAN, HELMET, {40,100,0,10,0,20})
    );
    ObjectList::lItem.push_back(
        new Item(8, "Cape du Chaos Endless", MAGICIAN, ARMOR, {60,100,0,15,0,30})
    );
    ObjectList::lItem.push_back(
        new Item(9, "Chaussons en poils de couilles", MAGICIAN, BOOTS, {30,100,0,5,5,15})
    );
    ObjectList::lItem.push_back(
        new Item(10, "Grimoire des Abysses Universelles", MAGICIAN, LEFT, {30,100,0,10,10,25})
    );
    ObjectList::lItem.push_back(
        new Item(11, "Scepte de quietude inquietant", MAGICIAN, RIGHT, {0,100,0,0,25,0})
    );
    ObjectList::lItem.push_back(
        new Item(12, "Anneau du $vv@gg <3 <3 LOVE", MAGICIAN, RING, {70,100,0,5,5,10})
    );
    ObjectList::lItem.push_back(
        new Item(13, "Collier Maudit du Black Pearl", MAGICIAN, AMULET, {70,100,0,5,5,10})
    );
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
            "\t3. Voir ses competences d'etalon,\n" <<
            "\t4. Examiner son stuff totalement mouteki,\n" <<
            "\t5. Lire son journal de quete en reliure rose bonbon trop pimp,\n" <<
            "\t6. Chanter une chanson d'amour,\n" <<
            "\t7. Donner son avis sur la pornolitique,\n" <<
            "\t8. Quitter cette aventure epic qui m'a beaucoup distrait je l'avoue.\n";

        std::cin >> action;

        if( action < 1 || action > 8 )
        {
            std::cout << "Veuillez choisir un nombre entre 1 et 8, fils de pute, cordialement.";
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
