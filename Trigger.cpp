#include "Trigger.h"

std::string getStringTrigger( Trigger trigger )
{
    switch( trigger.action )
    {
        case KILL_MOB :
            return "Tuez le monstre ..."; //TODO Nom du monstre
        case MORE_LIFE :
            return "Avoir plus de " + typeToString<int>(trigger.value) + "PV.";
        default :
            std::cout << "Champs interdit, préférez les parkings SVP (hahahahaaaa...)";
            std::exit( 15 );
    }
}
