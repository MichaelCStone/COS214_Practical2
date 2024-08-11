#include "CareTaker.h"

CareTaker::CareTaker()
{

}

void CareTaker::addMemento (Memento * mem)
{
    this->mementos.push_back(mem);
}

Memento * CareTaker::getMemento (int index)
{
    if (index >= 0 && index < mementos.size())
    {
        return this->mementos[index];
    }

    return nullptr;
}

Memento * CareTaker::getLastMemento()
{
    if (!this->mementos.empty())
    {
        return this->mementos.back();
    }

    return nullptr;
}

CareTaker::~CareTaker()
{
    for (Memento * memento : this->mementos)
    {
        delete memento;
    }

    this->mementos.clear();
}