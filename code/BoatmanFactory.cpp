#include "BoatmanFactory.h"
#include "Boatman.h"
#include "Soldiers.h"

Soldiers* BoatmanFactory::createUnit()
{
    return new Boatman();
}

int BoatmanFactory::calculateTotalHealthPerUnit()
{
    return getSoldiers()->getHealthPerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();
}

int BoatmanFactory::calculateTotalDamagePerUnit()
{
    return getSoldiers()->getDamagePerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();
}

int BoatmanFactory::calculateTotalDefensePerUnit()
{
    return getSoldiers()->getDefencePerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();
}