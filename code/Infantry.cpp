#include "Infantry.h"
#include "Soldiers.h"

Infantry::Infantry() : Soldiers(100, 30, 15, 50, "Infantry")
{
}

Soldiers* Infantry::clonis()
{
    //return new Infantry(*this);

    Infantry* clone = new Infantry();

    clone->healthPerSoldier = this->healthPerSoldier;
    clone->damagePerSoldier = this->damagePerSoldier;
    clone->defencePerSoldier = this->defencePerSoldier;
    clone->amountOfSoldiersPerUnit = this->amountOfSoldiersPerUnit;
    clone->unitName = this->unitName;

    return clone;
}

void Infantry::engage() //: Soldiers
{
    
}

void Infantry::disengage()
{

}

void Infantry::prepare()
{
    
}

void Infantry::execute()
{

}

void Infantry::retreat()
{

}

void Infantry::rest()
{

}