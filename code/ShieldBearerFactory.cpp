#include "ShieldBearerFactory.h"
#include "ShieldBearer.h"
#include "Soldiers.h"

Soldiers* ShieldBearerFactory::createUnit()
{
    return new ShieldBearer();
}

int ShieldBearerFactory::calculateTotalHealthPerUnit()
{
    //return getSoldiers()->getHealthPerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();

    return soldiers->getHealthPerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

int ShieldBearerFactory::calculateTotalDamagePerUnit()
{
    //return getSoldiers()->getDamagePerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();

    return soldiers->getDamagePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

int ShieldBearerFactory::calculateTotalDefensePerUnit()
{
    //return getSoldiers()->getDefencePerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();

    return soldiers->getDefencePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}