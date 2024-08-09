#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include "Soldiers.h"
#include "SoldierFactory.h"

class InfantryFactory : public SoldierFactory
{
    //private:
    //     Soldiers* soldiers;
    public: 
        Soldiers* createUnit() override;
        int calculateTotalHealthPerUnit() override;
        int calculateTotalDamagePerUnit() override;
        int calculateTotalDefensePerUnit() override;
};

#endif