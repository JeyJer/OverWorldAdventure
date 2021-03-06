#ifndef SKILL_H_INCLUDED
#define SKILL_H_INCLUDED

#include <string>

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
    std::string m_punchline;
public:
    Skill( int id, std::string name, ClassType classType, SkillEffect skillEffect,
          unsigned int power, std::string punchline );
    ~Skill();
    std::string disp() const;
    unsigned int getId();
    std::string getName();
    ClassType getClassType();
    SkillEffect getSkillEffect();
    unsigned int getPower();
    std::string getPunchline();
};

#endif // SKILL_H_INCLUDED
