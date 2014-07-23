#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include <string>

#include "Statistic.h"

class Character
{
protected:
    std::string m_name;
    Statistic m_stat;
public:
    Character( std::string name, Statistic m_stat );
    virtual ~Character();
    virtual void addSkill(int id) = 0;
};

#endif // CHARACTER_H_INCLUDED
