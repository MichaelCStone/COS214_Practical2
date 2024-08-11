#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"
#include <vector>

class CareTaker
{
    private:
        std::vector<Memento*> mementos;

    public:
        CareTaker();
        Memento * getMemento(int index);
        void addMemento(Memento *);
        Memento * getLastMemento();
        ~CareTaker();
};

#endif