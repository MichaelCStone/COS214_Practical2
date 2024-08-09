#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include "Soldiers.h"
#include "SoldierFactory.h"

class ShieldBearerFactory : public SoldierFactory
{
    // private:
    //     Soldiers* soldiers;
    public: 
        Soldiers* createUnit() override;
        int calculateTotalHealthPerUnit() override;
        int calculateTotalDamagePerUnit() override;
        int calculateTotalDefensePerUnit() override;
};

#endif