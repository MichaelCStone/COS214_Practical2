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

        virtual void prepare() = 0;
        virtual void execute() = 0;
        virtual void retreat() = 0;
        virtual void rest() = 0;
    public:
        virtual Soldiers* clonis() = 0;
        virtual void engage();
        virtual void disengage();
        Memento* militusMemento();
        void vivificaMemento(Memento* mem);

        Soldiers(int health, int damage, int defense, int numSoldiers, std::string name); //added
        virtual ~Soldiers() = default; //added

        int getHealthPerSoldier() const {return healthPerSoldier;} //added
        int getDamagePerSoldier() const {return damagePerSoldier;} //added
        int getDefencePerSoldier() const {return defencePerSoldier;} //added
        int getAmountOfSoldiersPerUnit() const {return amountOfSoldiersPerUnit;} //added
        std::string getUnitName() const {return unitName;} //added
};

#endif