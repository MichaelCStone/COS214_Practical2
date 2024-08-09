#include "Boatman.h"
#include "Soldiers.h"

Boatman::Boatman() : Soldiers(100, 50, 5, 20, "Boatman")
{
}

Soldiers* Boatman::clonis()
{
    //return new Boatman(*this);

    Boatman* clone = new Boatman();

    clone->healthPerSoldier = this->healthPerSoldier;
    clone->damagePerSoldier = this->damagePerSoldier;
    clone->defencePerSoldier = this->defencePerSoldier;
    clone->amountOfSoldiersPerUnit = this->amountOfSoldiersPerUnit;
    clone->unitName = this->unitName;

    return clone;
}