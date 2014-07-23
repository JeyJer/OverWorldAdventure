#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#include "Statistic.h"

class Item
{
private:
    int m_id;
    Statistic m_stat;
public:
    Item( int id, Statistic stat );
};

#endif // ITEM_H_INCLUDED
