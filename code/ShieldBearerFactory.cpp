#include "ShieldBearerFactory.h"
#include "ShieldBearer.h"
#include "Soldiers.h"

Soldiers* ShieldBearerFactory::createUnit()
{
    return new ShieldBearer();
}

int ShieldBearerFactory::calculateTotalHealthPerUnit()
{
    return getSoldiers()->getHealthPerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();
}

int ShieldBearerFactory::calculateTotalDamagePerUnit()
{
    return getSoldiers()->getDamagePerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();
}

int ShieldBearerFactory::calculateTotalDefensePerUnit()
{
    return getSoldiers()->getDefencePerSoldier() * getSoldiers()->getAmountOfSoldiersPerUnit();
}