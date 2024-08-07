#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include "Soldiers.h"
#include "SoldierFactory.h"

class InfantryFactory : public SoldierFactory
{
    // private:
    //     Soldiers* soldiers;
    public: 
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDamagePerUnit();
        int TotalDefensePerUnit();
};

#endif