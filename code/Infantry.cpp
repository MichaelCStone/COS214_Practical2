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
    std::cout<<"Infantry is engaging by unsheating their swords and charging with their horses."<<std::endl;
}

void Infantry::disengage()
{
    std::cout<<"Infantry is disengaging by holstering their swords."<<std::endl;
}

void Infantry::prepare()
{
    std::cout<<"Infantry is preparing by forming tight formations with their horses."<<std::endl;
}

void Infantry::execute()
{
    std::cout<<"Infantry is executing by slashing their swords at the enemy."<<std::endl;
}

void Infantry::retreat()
{
    std::cout<<"Infantry is retreating by riding their horses."<<std::endl;
}

void Infantry::rest()
{
    std::cout<<"Infantry is resting by cleaning their swords and feeding their horses. all health back to 100."<<std::endl;
}