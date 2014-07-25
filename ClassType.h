#ifndef CLASSTYPE_H_INCLUDED
#define CLASSTYPE_H_INCLUDED

#include <string>

enum ClassType
{
    WARRIOR = 1,
    MAGICIAN = 2
};

std::string getStringClass( unsigned int idEffect );

#endif // CLASSTYPE_H_INCLUDED
