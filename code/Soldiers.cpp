#include "Soldiers.h"

Soldiers::Soldiers(int health, int damage, int defense, int numSoldiers, std::string name) : healthPerSoldier(health), 
                    damagePerSoldier(damage), defencePerSoldier(defense), amountOfSoldiersPerUnit(numSoldiers), unitName(name)
{

}

// void Soldiers::engage()
// {
//     this->prepare();
//     this->execute();
// }

// void Soldiers::disengage()
// {
//     this->retreat();
//     this->rest();
// }