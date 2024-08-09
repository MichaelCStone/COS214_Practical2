#include "BoatmanFactory.h"
#include "Boatman.h"
#include "Soldiers.h"

Soldiers* BoatmanFactory::createUnit()
{
    return new Boatman();
}

int BoatmanFactory::calculateTotalHealthPerUnit()
{
    //return getSoldiers()->getHealthPerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();

    return soldiers->getHealthPerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

int BoatmanFactory::calculateTotalDamagePerUnit()
{
    //return getSoldiers()->getDamagePerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();

    return soldiers->getDamagePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

int BoatmanFactory::calculateTotalDefensePerUnit()
{
    //return getSoldiers()->getDefencePerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();

    return soldiers->getDefencePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}