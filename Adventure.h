#ifndef ADVENTURE_H_INCLUDED
#define ADVENTURE_H_INCLUDED

#include "Player.h"
#include "Mob.h"

void nextRide(Player* player);
int getRandomNumber(int minimum, int maximum);
void fight( Player* player, Mob mob );

#endif // ADVENTURE_H_INCLUDED
