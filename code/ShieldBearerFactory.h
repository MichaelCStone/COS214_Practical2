#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include "Soldiers.h"
#include "SoldierFactory.h"

class ShieldBearerFactory : public SoldierFactory
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