#include <iostream>

#include "OverWorld.h"

/** ATTENTION !!
  * Ce projet n'est pas un projet sérieux. Le programme ne cherche pas forcément
  * à être à la pointe de l'optimisation, et les pratiques utilisées ne sont pas
  * toujours les meilleures. Il s'agit essentiellement d'un projet de test.
  **/

int main()
{
    std::cout << "\t\tBienvenue sur le jeu de ouf OverWorld Adventure\n" << std::endl;

    int choice;
    do
    {
        do
        {
            std::cout << "\nFaites 1 puis faites entrer (fais pas 2 abruti!!)\n" <<
                "\t1. Nouvelle partie\n" <<
                "\t2. Quitter\n";
            std::cin >> choice;

            if( choice != 1 && choice != 2 )
                std::cout << "\nVeuillez choisir l'option 1 ou 2, fils de pute.\n";

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
                std::cout << "\nMerci d'avoir joue sur OverWorld Adventure!!\n";
                return 0;

            default :
                std::cout << "Choix inconnu... Votre ordinateur va s'auto-exploser...\n";
                std::exit(0);
                return 0;
        }
    } while( true );

    return 0;
}
