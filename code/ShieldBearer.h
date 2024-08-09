#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H

#include <string>
#include <iostream> //dunno if need cuz of string
#include "Soldiers.h"
#include "Memento.h"

class ShieldBearer : public Soldiers 
{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        std::string unitName;

        void prepare();
        void execute();
        void retreat();
        void rest();
    public:
        ShieldBearer(); //added
        Soldiers* clonis() override;
        void engage();
        void disengage();
};

#endif