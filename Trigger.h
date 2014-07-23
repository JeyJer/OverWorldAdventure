#ifndef TRIGGER_H_INCLUDED
#define TRIGGER_H_INCLUDED

enum Action
{
    KILL_MOB = 0,
    MORE_LIFE = 1
    // ...You can add how many Action that you want... ;)
};

struct Trigger
{
    Action action;
    int value; // id or amount
};

#endif // TRIGER_H_INCLUDED
