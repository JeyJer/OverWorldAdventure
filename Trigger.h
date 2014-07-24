#ifndef TRIGGER_H_INCLUDED
#define TRIGGER_H_INCLUDED

#include <iostream>
#include <cstdlib>

enum Action
{
    KILL_MOB = 0,
    MORE_LIFE = 1
    // ...You can add how many Action that you want... ;)
};

struct Trigger
{
    Trigger( Action act, int val )
        : action( act ), value( val ) {}
    Action action;
    int value; // id or amount
};

std::string getStringTrigger( Trigger trigger );

#endif // TRIGER_H_INCLUDED
