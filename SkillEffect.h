#ifndef SKILLEFFECT_H_INCLUDED
#define SKILLEFFECT_H_INCLUDED

#include <string>

enum SkillEffect
{
    PHYS_ATT = 1,
    MAG_ATT = 2,
    HEAL = 3
};

std::string getStringEffect( unsigned int idEffect );

#endif // SKILLEFFECT_H_INCLUDED
