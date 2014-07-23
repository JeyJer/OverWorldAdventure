#include "Player.h"

Player::Player( std::string name, Statistic stat, ClassType classType )
    : Character(name, stat), m_classType(classType)
{
}

Player::~Player()
{
}

void Player::showState() const
{
    std::cout << "\nJe m'appelle " << this->m_name << ", je suis un " <<
        ((this->m_classType == 1) ? "guerrier DU MAAAAALLL " : "magicien esoterique ") <<
        "et il me reste " << this->m_stat.life << "PV et " << this->m_stat.mana <<
        "PM (Points Mana). Sinon je t'imagine la tete dans un sac et le sac a l'arriere.\n";
}

void Player::dispSkills() const
{

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
