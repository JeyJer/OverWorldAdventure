#ifndef SKILL_H_INCLUDED
#define SKILL_H_INCLUDED

#include <iostream>
#include <string>
#include <sstream>

#include "ClassType.h"
#include "SkillEffect.h"

class Skill
{
private:
    unsigned int m_id;
    std::string m_name;
    ClassType m_classType;
    SkillEffect m_skillEffect;
    unsigned int m_power;
public:
    Skill( int id, std::string name, ClassType classType, SkillEffect skillEffect, unsigned int power );
    ~Skill();
    std::string disp() const;
    unsigned int getId();
    std::string getName();
    ClassType getClassType();
    SkillEffect getSkillEffect();
    unsigned int getPower();
};

#endif // SKILL_H_INCLUDED
