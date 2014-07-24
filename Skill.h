#ifndef SKILL_H_INCLUDED
#define SKILL_H_INCLUDED

#include <iostream>
#include <string>
#include <sstream>



class Skill
{
private:
    int m_id;
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
    int getId();
    std::string getName();
    ClassType getClassType();
    SkillEffect getSkillEffect();
    unsigned int getPower();
    std::string getPunchline();
};

#endif // SKILL_H_INCLUDED
