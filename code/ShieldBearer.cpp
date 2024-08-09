#include "ShieldBearer.h"
#include "Soldiers.h"

ShieldBearer::ShieldBearer() : Soldiers(100, 10, 60, 10, "ShieldBearer")
{
}

Soldiers* ShieldBearer::clonis()
{
    //return new ShieldBearer(*this);

    ShieldBearer* clone = new ShieldBearer();

    clone->healthPerSoldier = this->healthPerSoldier;
    clone->damagePerSoldier = this->damagePerSoldier;
    clone->defencePerSoldier = this->defencePerSoldier;
    clone->amountOfSoldiersPerUnit = this->amountOfSoldiersPerUnit;
    clone->unitName = this->unitName;

    return clone;
}