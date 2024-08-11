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


    std::cout<<"\nTesting Clonis------------------------------------------------------------------------------------------"<<std::endl;

    Soldiers* clone = armies[2]->clonis();

    std::cout<<"\nprint clone's attributes:"<<std::endl;

    std::cout << "Damage: " << clone->getDamagePerSoldier() << std::endl;
    std::cout << "Health: " << clone->getHealthPerSoldier() << std::endl;
    std::cout << "Defense: " << clone->getDefencePerSoldier() << std::endl;
    std::cout << "Amount Of Soldiers: " << clone->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name: " << clone->getUnitName() << std::endl;

    delete clone;
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