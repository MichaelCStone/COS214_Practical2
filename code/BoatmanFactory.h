#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include "Soldiers.h"
#include "SoldierFactory.h"

class BoatmanFactory : public SoldierFactory
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