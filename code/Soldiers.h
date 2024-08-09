#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <string>
#include <iostream> //dunno if need cuz of string
#include "Memento.h"

class Soldiers
{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        std::string unitName;

        virtual void prepare();
        virtual void execute();
        virtual void retreat();
        virtual void rest();
    public:
        virtual Soldiers* clonis();
        virtual void engage();
        virtual void disengage();
        Memento* militusMemento();
        void vivificaMemento(Memento* mem);

        int getHealthPerSoldier() const {return healthPerSoldier;}
        int getDamagePerSoldier() const {return damagePerSoldier;}
        int getDefencePerSoldier() const {return defencePerSoldier;}
        int getAmountOfSoldiersPerUnit() const {return amountOfSoldiersPerUnit;}
        std::string getUnitName() {return unitName;}
};

#endif