#include "Soldiers.h"
#include "Memento.h"

Soldiers::Soldiers(int health, int damage, int defense, int numSoldiers, std::string name) : healthPerSoldier(health), 
                    damagePerSoldier(damage), defencePerSoldier(defense), amountOfSoldiersPerUnit(numSoldiers), unitName(name)
{

}

Memento * Soldiers::militusMemento()
{
    return new Memento(this->healthPerSoldier, this->damagePerSoldier, this->defencePerSoldier, this->amountOfSoldiersPerUnit, this->unitName);
}

void Soldiers::vivificaMemento (Memento * mem)
{
    this->healthPerSoldier = mem->getHealthPerSoldier();
    this->damagePerSoldier = mem->getDamagePerSoldier();
    this->defencePerSoldier = mem->getDefencePerSoldier();
    this->amountOfSoldiersPerUnit = mem->getAmountOfSoldiersPerUnit();
    this->unitName = mem->getUnitName();
}