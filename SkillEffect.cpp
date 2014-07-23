#include "SkillEffect.h"

std::string getStringEffect( unsigned int idEffect )
{
    switch(idEffect)
    {
        case 1 :
            return "Attaque Physique";
        case 2 :
            return "Attaque magique";
        case 3 :
            return "Soin";
        default :
            std::cout << "UNKNOW SKILL... " << idEffect;
            std::exit(3);
    }
}
