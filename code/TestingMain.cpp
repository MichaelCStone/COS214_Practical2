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

    armies[0]->engage();

    std::cout<<armies[0]->getDamagePerSoldier();
}