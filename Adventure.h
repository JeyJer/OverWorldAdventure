#ifndef ADVENTURE_H_INCLUDED
#define ADVENTURE_H_INCLUDED

#include <cstdlib>
#include <ctime>
#include <iostream>

#include "ClassType.h"
#include "ObjectList.h"

class Player;
class Mob;

void nextRide(Player* player);
int getRandomNumber(int minimum, int maximum);
void fight( Player* player, Mob* mob );

#endif // ADVENTURE_H_INCLUDED
