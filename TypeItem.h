#ifndef TYPEITEM_H_INCLUDED
#define TYPEITEM_H_INCLUDED

#include <iostream>
#include <string>
#include <cstdlib>

enum TypeItem
{
    HELMET = 0,
    ARMOR = 1,
    BOOTS = 2,
    LEFT = 3,
    RIGHT = 4,
    RING = 5,
    AMULET = 6
};

std::string getStringTypeItem( TypeItem typeItem );

#endif // TYPEITEM_H_INCLUDED
