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

void Boatman::engage() //: Soldiers
{
    std::cout<<"Boatman is engaging by drawing their bows with flaming arrows."<<std::endl;
}

void Boatman::disengage()
{
    std::cout<<"Boatman is disengaging by lowering their bows."<<std::endl;
}

void Boatman::prepare()
{
    std::cout<<"Boatman is preparing by moving their boats to flanking positions and readying their bows."<<std::endl;
}

void Boatman::execute()
{
    std::cout<<"Boatman is executing by firing their bows."<<std::endl;
}

void Boatman::retreat()
{
    std::cout<<"Boatman is retreating by sailing their boats away."<<std::endl;
}

void Boatman::rest()
{
    std::cout<<"Boatman is resting by repairing their boats and making more arrows. all health back to 100."<<std::endl;
}