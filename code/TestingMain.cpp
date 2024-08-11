#include "SoldierFactory.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"
#include "Soldiers.h"
#include "Infantry.h"
#include "ShieldBearer.h"
#include "Boatman.h"
#include "CareTaker.h"

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

    std::cout<<"\nTesting Clonis for Infantry------------------------------------------------------------------------------------------"<<std::endl;

    Soldiers* InfantryClone = armies[0]->clonis();

    std::cout<<"\nprint clone's attributes:"<<std::endl;

    std::cout << "Damage: " << InfantryClone->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << InfantryClone->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << InfantryClone->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << InfantryClone->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << InfantryClone->getUnitName() << std::endl;

    delete InfantryClone;

    std::cout << "\nShieldBearer methods:-------------------------------------------------------------------------------------"<<std::endl;
    
    armies[1]->engage();
    armies[1]->disengage();

    std::cout << "Damage: " << armies[1]->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << armies[1]->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << armies[1]->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << armies[1]->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << armies[1]->getUnitName() << std::endl;

    std::cout<<"\nTesting Clonis for ShieldBearer------------------------------------------------------------------------------------------"<<std::endl;

    Soldiers* ShieldBearerClone = armies[1]->clonis();

    std::cout<<"\nprint clone's attributes:"<<std::endl;

    std::cout << "Damage: " << ShieldBearerClone->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << ShieldBearerClone->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << ShieldBearerClone->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << ShieldBearerClone->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << ShieldBearerClone->getUnitName() << std::endl;

    delete ShieldBearerClone;

    std::cout << "\nBoatman methods:-------------------------------------------------------------------------------------"<<std::endl;
    
    armies[2]->engage();
    armies[2]->disengage();

    std::cout << "Damage: " << armies[2]->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << armies[2]->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << armies[2]->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << armies[2]->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << armies[2]->getUnitName() << std::endl;


    std::cout<<"\nTesting Clonis for Boatman------------------------------------------------------------------------------------------"<<std::endl;

    Soldiers* BoatmanClone = armies[2]->clonis();

    std::cout<<"\nprint clone's attributes:"<<std::endl;

    std::cout << "Damage: " << BoatmanClone->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << BoatmanClone->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << BoatmanClone->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << BoatmanClone->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << BoatmanClone->getUnitName() << std::endl;

    delete BoatmanClone;

    //TESTING MEMENTO
    std::cout << "\nMemento methods on Infantry:--------------------------------------------------------------------------"<<std::endl;
    
    CareTaker careTaker;

    careTaker.addMemento(armies[0]->militusMemento());

    std::cout << "State of object before changes:"<<std::endl;
    std::cout << "Damage: " << armies[0]->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << armies[0]->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << armies[0]->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << armies[0]->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << armies[0]->getUnitName() << std::endl;

    armies[0]->setHealthPerSoldier(80);
    armies[0]->setAmountOfSoldiersPerUnit(37);

    careTaker.addMemento(armies[0]->militusMemento());

    std::cout << "\nState of object after changes:"<<std::endl;
    std::cout << "Damage: " << armies[0]->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << armies[0]->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << armies[0]->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << armies[0]->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << armies[0]->getUnitName() << std::endl;

    armies[0]->vivificaMemento(careTaker.getMemento(0));

    std::cout << "\nState of object after being restored:"<<std::endl;
    std::cout << "Damage: " << armies[0]->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << armies[0]->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << armies[0]->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << armies[0]->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << armies[0]->getUnitName() << std::endl;

    armies[0]->vivificaMemento(careTaker.getLastMemento());

    std::cout << "\nGet the last memento which will be after changes again:"<<std::endl;
    std::cout << "Damage: " << armies[0]->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << armies[0]->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << armies[0]->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << armies[0]->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << armies[0]->getUnitName() << std::endl;

    //destructor for careTaker or memento? valgrind shows we are not freeing everything - done ("no leaks possible")

    //DELETING OBJECTS
    for(int k=0; k<3; k++)
    {
        delete armies[k];
        armies[k] = nullptr;
        delete factory[k];
        factory[k] = nullptr;
    }
}