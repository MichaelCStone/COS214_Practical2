#ifndef INFANTRY_H
#define INFANTRY_H

#include <string>
#include <iostream> //dunno if need cuz of string
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
        
        void prepare();
        void execute();
        void retreat();
        void rest();
    public:
        Infantry(); //added
        Soldiers* clonis() override;
        void engage() override;
        void disengage() override;
        Memento* militusMemento();
        void vivificaMemento(Memento* mem);
};

#endif