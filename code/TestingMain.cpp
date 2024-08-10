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
    SoldierFactory* factory[3];

    factory[0] = new InfantryFactory();
    factory[1] = new ShieldBearerFactory();
    factory[2] = new BoatmanFactory();

    Soldiers* armies[3];

    for(int k=0; k<3; k++)
    {
        armies[k] = factory[k]->create();
    }

    std::cout << "Infantry methods:-------------------------------------------------------------------------------------"<<std::endl;
    
    armies[0]->engage();
    armies[0]->disengage();

    std::cout << "Damage: " << armies[0]->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << armies[0]->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << armies[0]->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << armies[0]->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << armies[0]->getUnitName() << std::endl;

    std::cout<<std::endl;

    std::cout << "ShieldBearer methods:-------------------------------------------------------------------------------------"<<std::endl;
    
    armies[1]->engage();
    armies[1]->disengage();

    std::cout << "Damage: " << armies[1]->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << armies[1]->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << armies[1]->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << armies[1]->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << armies[1]->getUnitName() << std::endl;

    std::cout<<std::endl;

    std::cout << "Boatman methods:-------------------------------------------------------------------------------------"<<std::endl;
    
    armies[2]->engage();
    armies[2]->disengage();

    std::cout << "Damage: " << armies[2]->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << armies[2]->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << armies[2]->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << armies[2]->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << armies[2]->getUnitName() << std::endl;

    for(int k=0; k<3; k++)
    {
        delete armies[k];
        armies[k] = nullptr;
        delete factory[k];
        factory[k] = nullptr;
    }
}