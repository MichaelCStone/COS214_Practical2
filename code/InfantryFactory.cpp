#include "InfantryFactory.h"
#include "Infantry.h"
#include "Soldiers.h"

Soldiers* InfantryFactory::createUnit()
{
    return new Infantry();
}

int InfantryFactory::calculateTotalHealthPerUnit()
{
    return /*getSoldiers()*/soldiers->getHealthPerSoldier() * /*getSoldiers()*/soldiers->getAmountOfSoldiersPerUnit();
}

int InfantryFactory::calculateTotalDamagePerUnit()
{
    return /*getSoldiers()*/soldiers->getDamagePerSoldier() * /*getSoldiers()*/soldiers->getAmountOfSoldiersPerUnit();
}

int InfantryFactory::calculateTotalDefensePerUnit()
{
    return /*getSoldiers()*/soldiers->getDefencePerSoldier() * /*getSoldiers()*/soldiers->getAmountOfSoldiersPerUnit();
}