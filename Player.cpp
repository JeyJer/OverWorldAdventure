#include "Player.h"
#include "ClassType.h"
#include "ObjectList.h"

Player::Player( std::string name, Statistic stat, ClassType classType )
    : Character(name, stat), m_classType(classType)
{
    for( int i = 0; i < LENGTH_ITEM; ++i )
        this->m_stuff[i] = 0;
}

Player::~Player()
{
}

void Player::addSkill(int id)
{
    this->m_lSkill.push_back( id );

    std::cout << "\nFelicitation !! Vous venez d'apprendre un nouveau sort !!\n\t" <<
        ObjectList::lSkill.at(id).getName() << ".\n";
}

void Player::wearStuff(int id)
{
    Item* item = ObjectList::lItem.at(id);
    if( this->canWearItem(id) )
    {
        std::cout << "ULTRA FATAL MEGA OUTPUT ERROR OF APOCALYPSE !!!!!! " <<
            ObjectList::lItem.at(id)->getClassType() << " != " << this->m_classType;
        std::exit(11);
    }
    else if( m_stuff[item->getTypeItem()] == 0 )
    {
        std::cout << "\nVous portez desormais l'item suivant : " << item->getName() << '\n';
        this->addStat( item );
        m_stuff[item->getTypeItem()] = item;
    }
    else
    {
        std::cout << "\nVous portez deja un item.\n\n" <<
            "Item porte :\n" << m_stuff[item->getTypeItem()]->disp() <<
            "\n\nItem propose :\n" << item->disp() << '\n';

        std::cout << "\nVoulez-vous changer d'item ?\n"
            "\t1. Oui --> l'item que vous portez actuellement sera detruit.\n" <<
            "\t2. Non --> l'item propose sera detruit.\n";

        int choice;
        do
        {
            std::cin >> choice;

            if( choice != 1 && choice != 2 )
                std::cout << "\nVeuillez choisir le choix 1 ou 2.\n";

        } while( choice != 1 && choice != 2 );

        if( choice == 1 )
        {
            this->removeStat( m_stuff[item->getTypeItem()] );
            this->addStat( item );
            m_stuff[item->getTypeItem()] = item;
            std::cout << "\nFelicitation! Vous portez desormais un nouvel item!\n";
        }
        else
        {
            std::cout << "\nVous conservez votre item actuel\n";
        }
    }
}

bool inline Player::canWearItem(int id)
{
    return (ObjectList::lItem.at(id)->getClassType() != this->m_classType);
}

void Player::addStat(Item* item)
{
    this->m_stat.life += item->getStat().life;
    this->m_stat.mana += item->getStat().mana;
    this->m_stat.physicalAtt += item->getStat().physicalAtt;
    this->m_stat.physicalDef += item->getStat().physicalDef;
    this->m_stat.magicalAtt += item->getStat().magicalAtt;
    this->m_stat.magicalDef += item->getStat().magicalDef;
}

void Player::removeStat(Item* item)
{
    this->m_stat.life -= item->getStat().life;
    this->m_stat.mana -= item->getStat().mana;
    this->m_stat.physicalAtt -= item->getStat().physicalAtt;
    this->m_stat.physicalDef -= item->getStat().physicalDef;
    this->m_stat.magicalAtt -= item->getStat().magicalAtt;
    this->m_stat.magicalDef -= item->getStat().magicalDef;
}

void Player::addQuest(Quest* quest)
{
    this->m_lQuestCurrent.push_back( quest );
    std::cout << "\nNouvelle quete debutee!\n";
}

void Player::finishQuest(Quest* quest)
{
    bool found = false;
    for( unsigned int i = 0; i < this->m_lQuestCurrent.size(); ++i )
    {
        if( this->m_lQuestCurrent.at(i)->getId() == quest->getId() )
        {
            found = true;
            this->m_lQuestFinished.push_back( quest );
            this->m_lQuestCurrent.erase( m_lQuestCurrent.begin() + i);
            break;
        }
    }

    if( !found )
    {
        std::cout << "Oh putain mon fucking soft marche pas... "
            "Ca va chier... ### ? " << quest->getId();
            std::exit( 13 );
    }
    std::cout << "\nQuete achevee! Recompense : ";
    this->getQuestReward( quest );

}

void Player::getQuestReward(Quest* quest)
{
    switch( quest->getReward().rewardType )
    {
        case LIFE :
            this->m_stat.life += quest->getReward().value;
            std::cout << "gain de vie!\n";
            break;

        case ATTACK :
            this->m_stat.magicalAtt += quest->getReward().value;
            this->m_stat.physicalAtt += quest->getReward().value;
            std::cout << "gain d'attaque!\n";
            break;

        case DEFENSE :
            this->m_stat.magicalDef += quest->getReward().value;
            this->m_stat.physicalDef += quest->getReward().value;
            std::cout << "gain de defense!\n";
            break;

        case ITEM :
            std::cout << "gain d'item!\n";
            if( !canWearItem(quest->getReward().value) )
            {
                this->wearStuff(quest->getReward().value+7);
            }
            else
            {
                this->wearStuff(quest->getReward().value);
            }
            break;

        default:
            std::cout << "Could god save the america...";
            std::exit( 14 );
    }
}

void Player::showState() const
{
    std::cout << "\nJe m'appelle " << this->m_name << ", je suis un " <<
         getStringClass(this->m_classType) << " et il me reste " << this->m_stat.life <<
         "PV et " <<this->m_stat.mana << "PM (Points Mana). Sinon je "
         "t'imagine la tete dans un sac et le sac a l'arriere.\n";
}

void Player::dispSkills() const
{
    std::cout << "\nSorts :";
    for( unsigned int i = 0; i < this->m_lSkill.size(); ++i )
    {
        std::cout << "\n\t" << ObjectList::lSkill.at( this->m_lSkill.at(i) ).disp();
    }
    std::cout << '\n';
}

void Player::dispStuff() const
{
    std::cout << "\nItems portes : \n";
    for( int i = 0; i < LENGTH_ITEM; ++i )
    {
        if( this->m_stuff[i] != 0 )
        {
            std::cout << '\n' << this->m_stuff[i]->disp() << '\n';
        }
    }
}

void Player::dispQuestJournal() const
{
    std::cout << "\nQuetes en cours :\n";
    for( unsigned int i = 0; i < this->m_lQuestCurrent.size(); ++i )
        std::cout << this->m_lQuestCurrent.at(i)->disp( false ) << '\n';

    std::cout << "\nQuetes finies :\n";
    for( unsigned int i = 0; i < this->m_lQuestFinished.size(); ++i )
        std::cout << this->m_lQuestFinished.at(i)->disp( true ) << '\n';
}

Item** Player::getStuff()
{
    return this->m_stuff;
}

std::vector<Quest*> Player::getListQuestCurrent()
{
    return this->m_lQuestCurrent;
}

std::vector<Quest*> Player::getListQuestFinished()
{
    return this->m_lQuestFinished;
}

std::vector<int> Player::getListSkill()
{
    return this->m_lSkill;
}
