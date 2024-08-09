#include "Boatman.h"
#include "Soldiers.h"

Boatman::Boatman() : Soldiers(100, 50, 5, 20, "Boatman")
{
}

Soldiers* Boatman::clonis()
{
    return new Boatman(*this);
}