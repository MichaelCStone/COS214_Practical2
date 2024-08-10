#ifndef BOATMAN_H
#define BOATMAN_H

#include <string>
#include <iostream>
#include "Soldiers.h"
#include "Memento.h"

class Boatman : public Soldiers 
{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        std::string unitName;

        void prepare() override;
        void execute() override;
        void retreat() override;
        void rest() override;
    public:
        Boatman(); //added
        Soldiers* clonis() override;
        void engage() override;
        void disengage() override;
};

#endif