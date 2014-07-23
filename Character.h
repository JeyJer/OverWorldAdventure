#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include <string>

#include "Statistic.cpp"

class Character
{
protected:
    std::string m_name;
    Statistic m_stat;
public:
    Character( std::string name, Statistic m_stat );
    virtual ~Character();
};

#endif // CHARACTER_H_INCLUDED
