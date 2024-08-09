#include "Soldiers.h"

Soldiers::Soldiers(int health, int damage, int defense, int numSoldiers, std::string name) : healthPerSoldier(health), 
                    damagePerSoldier(damage), defencePerSoldier(defense), amountOfSoldiersPerUnit(numSoldiers), unitName(name)
{

}

