#include <iostream>

#include "OverWorld.h"

int main()
{
    std::cout << "\t\tBienvenue sur le jeu de ouf OverWorld Adventure\n" << std::endl;

    int choice;
    do
    {
        do
        {
            std::cout << "Faites 1 puis faites entrer (fais pas 2 abruti!!)\n" <<
                "\t1. Nouvelle partie\n" <<
                "\t2. Quitter\n";
            std::cin >> choice;

            if( choice != 1 && choice != 2 )
                std::cout << "Veuillez choisir l'option 1 ou 2, fils de pute.";

        } while( choice != 1 && choice != 2 );

        switch(choice)
        {
            case 1 :
            {
                OverWorld* ow = new OverWorld;
                ow->run();
                delete ow;
                ow = 0;
                break;
            }

            case 2 :
                std::cout << "Merci d'avoir joue sur OverWorld Adventure!!\n";
                return 0;

            default :
                std::cout << "Choix inconnu... Votre ordinateur va s'auto-exploser...\n";
                std::exit(0);
                return 0;
        }
    } while( true );

    return 0;
}
