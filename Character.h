#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include <string>
#include <cstdlib>

#include "Statistic.h"
#include "ObjectList.h"

class Character
{
protected:
    std::string m_name;
    Statistic m_stat;
public:
    Character( std::string name, Statistic stat );
    virtual ~Character();
    virtual void addSkill(int id) = 0;
    void attack(Character* character, int idSkill );
    std::string getName();
    Statistic getStatistic();
};

#endif // CHARACTER_H_INCLUDED
