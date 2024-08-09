#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"

class SoldierFactory
{
    private:
        Soldiers* soldiers;
    protected: 
        virtual Soldiers* createUnit() = 0;
        virtual int calculateTotalHealthPerUnit() = 0;
        virtual int calculateTotalDamagePerUnit() = 0;
        virtual int calculateTotalDefensePerUnit() = 0;

        Soldiers* getSoldiers() const {return soldiers;} //added
    public: 
        virtual ~SoldierFactory() {delete soldiers;} //added
        SoldierFactory() : soldiers(createUnit()){} //added
};

#endif