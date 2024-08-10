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

void ShieldBearer::engage() //: Soldiers
{
    std::cout<<"ShieldBearer is engaging by forming a wall with their shields."<<std::endl;
}

void ShieldBearer::disengage()
{
    std::cout<<"ShieldBearer is disengaging by picking up their shields."<<std::endl;
}

void ShieldBearer::prepare()
{
    std::cout<<"ShieldBearer is preparing by forming a tight formation with other shieldBearers to form a wall."<<std::endl;
}

void ShieldBearer::execute()
{
    std::cout<<"ShieldBearer is executing by using their other hand to slash their swords."<<std::endl;
}

void ShieldBearer::retreat()
{
    std::cout<<"ShieldBearer is retreating by walking away."<<std::endl;
}

void ShieldBearer::rest()
{
    std::cout<<"ShieldBearer is resting by cleaning their shields. all health back to 100."<<std::endl;
}