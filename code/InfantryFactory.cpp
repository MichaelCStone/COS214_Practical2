#include "InfantryFactory.h"
#include "Infantry.h"
#include "Soldiers.h"

Soldiers* InfantryFactory::createUnit()
{
    return new Infantry();
}

int InfantryFactory::calculateTotalHealthPerUnit()
{
    return getSoldiers()->getHealthPerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();
}

int InfantryFactory::calculateTotalDamagePerUnit()
{
    return getSoldiers()->getDamagePerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();
}

int InfantryFactory::calculateTotalDefensePerUnit()
{
    return getSoldiers()->getDefencePerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();
}