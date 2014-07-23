#include "Skill.h"

Skill::Skill( int id, std::string name, ClassType classType, SkillEffect skillEffect, unsigned int power )
    : m_id( id ), m_name( name ), m_classType( classType ), m_skillEffect( skillEffect ), m_power( power )
{
}

Skill::~Skill()
{
}

std::string Skill::disp() const
{
    std::stringstream sstm;
    sstm << this->m_power;

    return "Nom : " + this->m_name +
        ", classe : " + getStringClass(this->m_classType) +
        ", effet : " + getStringEffect(this->m_skillEffect) +
        ", puisssance : " + sstm.str();
}

unsigned int Skill::getId()
{
    return this->m_id;
}

std::string Skill::getName()
{
    return this->m_name;
}

ClassType Skill::getClassType()
{
    return this->m_classType;
}

SkillEffect Skill::getSkillEffect()
{
    return this->m_skillEffect;
}

unsigned int Skill::getPower()
{
    return this->m_power;
}
