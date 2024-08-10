#include "SoldierFactory.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"
#include "Soldiers.h"
#include "Infantry.h"
#include "ShieldBearer.h"
#include "Boatman.h"

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    SoldierFactory* fact[3];

    fact[0] = new InfantryFactory();

    Soldiers* armies[3];

    armies[0] = fact[0]->create();

    std::cout << "Infantry methods:-------------------------------------------------------------------------------------"<<std::endl;
    armies[0]->engage();
    armies[0]->disengage();

    std::cout << "Damage: " << armies[0]->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << armies[0]->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << armies[0]->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << armies[0]->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << armies[0]->getUnitName() << std::endl;
}