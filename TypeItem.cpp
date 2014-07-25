#include "TypeItem.h"

#include <iostream>
#include <cstdlib>

std::string getStringTypeItem( TypeItem typeItem )
{
    switch( typeItem )
    {
        case 0 :
            return "Casque";
        case 1 :
            return "Armure";
        case 2 :
            return "Bottes";
        case 3 :
            return "Main gauche";
        case 4 :
            return "Main droite";
        case 5 :
            return "Anneau";
        case 6 :
            return "Amulette";
        default :
            std::cout << "Unknown item type... :'( :'( :'( " << typeItem;
            std::exit(10);
    }
}
