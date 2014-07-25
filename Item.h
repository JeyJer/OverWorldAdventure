#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#include <string>

#include "Statistic.h"
#include "ClassType.h"
#include "TypeItem.h"

class Item
{
private:
    int m_id;
    std::string m_name;
    ClassType m_classType;
    TypeItem m_typeItem;
    Statistic m_stat;
public:
    Item( int id, std::string name, ClassType classType, TypeItem typeItem, Statistic stat );
    std::string disp();
    std::string getName();
    ClassType getClassType();
    TypeItem getTypeItem();
    Statistic getStat();
};

#endif // ITEM_H_INCLUDED
