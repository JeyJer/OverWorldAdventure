#include "Skill.h"

Skill::Skill( int id, std::string name, ClassType classType, SkillEffect skillEffect,
             unsigned int power, std::string punchline )
    : m_id( id ), m_name( name ), m_classType( classType ), m_skillEffect( skillEffect ),
        m_power( power ), m_punchline( punchline )
{
}

Skill::~Skill()
{
}

std::string Skill::disp() const
{
    return "Nom : " + this->m_name +
        ", classe : " + getStringClass(this->m_classType) +
        ", effet : " + getStringEffect(this->m_skillEffect) +
        ", puisssance : " + typeToString(this->m_power);
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

std::string Skill::getPunchline()
{
    return this->m_punchline;
}
