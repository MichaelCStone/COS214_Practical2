#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>
#include <iostream> //dunno if need cuz of string

class Memento
{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        std::string unitName;
        Memento(int value1, int value2, int value3, int value4, std::string value5);
};

#endif