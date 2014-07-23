#include "Player.h"
#include "ClassType.h"
#include "ObjectList.h"

Player::Player( std::string name, Statistic stat, ClassType classType )
    : Character(name, stat), m_classType(classType)
{
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

void Player::showState() const
{
    std::cout << "\nJe m'appelle " << this->m_name << ", je suis un " <<
         getStringClass(this->m_classType) << " et il me reste " << this->m_stat.life <<
         "PV et " <<this->m_stat.mana << "PM (Points Mana). Sinon je "
         "t'imagine la tete dans un sac et le sac a l'arriere.\n";
}

void Player::dispSkills() const
{
    std::cout << "\nSorts :\n";
    for( unsigned int i = 0; i < this->m_lSkill.size(); ++i )
    {
        std::cout << '\t' << ObjectList::lSkill.at( this->m_lSkill.at(i) ).disp();
    }
    std::cout << '\n';
}

void Player::dispStuff() const
{

}

void Player::dispQuestJournal() const
{

}

Item** Player::getStuff()
{
    return this->m_stuff;
}

std::vector<int> Player::getListQuestCurrent()
{
    return this->m_lQuestCurrent;
}

std::vector<int> Player::getListQuestFinished()
{
    return this->m_lQuestFinished;
}

std::vector<int> Player::getListSkill()
{
    return this->m_lSkill;
}
