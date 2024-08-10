#ifndef INFANTRY_H
#define INFANTRY_H

#include <string>
#include <iostream>
#include "Soldiers.h"
#include "Memento.h"

class Infantry : public Soldiers 
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
        Infantry(); //added
        Soldiers* clonis() override;
        void engage() override;
        void disengage() override;
};

#endif