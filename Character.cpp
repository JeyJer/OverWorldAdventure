#include <cstdlib>
#include <iostream>

#include "Character.h"
#include "SkillEffect.h"
#include "ObjectList.h"

Character::Character( std::string name, Statistic stat )
    : m_name(name), m_stat(stat)
{
}

Character::~Character()
{
}

void Character::attack(Character* character, int idSkill )
{
    Skill* skill = ObjectList::lSkill.at( idSkill );
    std::cout << "\nLe sort " << skill->getName() << " est lance par " << this->m_name <<
        " sur " << character->m_name << '\n' << skill->getPunchline() << '\n';

    switch( skill->getSkillEffect() )
    {
        case PHYS_ATT :
        {
            int thisAtt = (skill->getPower() + this->m_stat.physicalAtt);
            thisAtt = thisAtt - character->m_stat.physicalDef/4;
            if( thisAtt < 1 )
            {
                thisAtt = 1;
            }
            character->m_stat.life -= thisAtt;
            std::cout << character->m_name << " se voit inflige -" << thisAtt << "PV.\n";
            break;
        }
        case MAG_ATT :
        {
            int thisAtt = (skill->getPower() + this->m_stat.magicalAtt);
            thisAtt = thisAtt - character->m_stat.magicalDef/4;
            if( thisAtt < 1 )
            {
                thisAtt = 1;
            }
            this->m_stat.mana--;
            character->m_stat.life -= thisAtt;
            std::cout << character->m_name << " se voit inflige -" << thisAtt << "PV.\n";
            break;
        }
        case HEAL :
            this->m_stat.mana--;
            character->m_stat.life += skill->getPower();
            std::cout << character->m_name << " recoit +" << skill->getPower() << "PV.\n";
            break;

        default :
            std::cout << "TADADADAAAAMMM !!";
            std::exit(17);
    }
    std::cout << "Vie de " << character->m_name << " : " << character->m_stat.life << "PV.\n";
}

void Character::attack(Character* character, Skill* skill )
{
    std::cout << "\nLe sort " << skill->getName() << " est lance par " << this->m_name <<
        " sur " << character->m_name << '\n' << skill->getPunchline() << '\n';

    switch( skill->getSkillEffect() )
    {
        case PHYS_ATT :
        {
            int thisAtt = (skill->getPower() + this->m_stat.physicalAtt);
            thisAtt = thisAtt - character->m_stat.physicalDef/4;
            if( thisAtt < 1 )
            {
                thisAtt = 1;
            }
            character->m_stat.life -= thisAtt;
            std::cout << character->m_name << " se voit inflige -" << thisAtt << "PV.\n";
            break;
        }
        case MAG_ATT :
        {
            int thisAtt = (skill->getPower() + this->m_stat.magicalAtt);
            thisAtt = thisAtt - character->m_stat.magicalDef/4;
            if( thisAtt < 1 )
            {
                thisAtt = 1;
            }
            this->m_stat.mana--;
            character->m_stat.life -= thisAtt;
            std::cout << character->m_name << " se voit inflige -" << thisAtt << "PV.\n";
            break;
        }
        case HEAL :
            this->m_stat.mana--;
            character->m_stat.life += skill->getPower();
            std::cout << character->m_name << " recoit +" << skill->getPower() << "PV.\n";
            break;

        default :
            std::cout << "TADADADAAAAMMM !!";
            std::exit(17);
    }
    std::cout << "Vie de " << character->m_name << " : " << character->m_stat.life << "PV.\n";
}

std::string Character::getName()
{
    return this->m_name;
}

Statistic Character::getStatistic()
{
    return this->m_stat;
}
