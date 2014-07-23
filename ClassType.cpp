#include "ClassType.h"

std::string getStringClass( unsigned int idEffect )
{
    switch(idEffect)
    {
        case 1 :
            return "guerrier DU MAAAAALLL";
        case 2 :
            return "magicien esoterique";
        default :
            std::cout << "UNKNOW SKILL... " << idEffect;
            std::exit(4);
    }
}
