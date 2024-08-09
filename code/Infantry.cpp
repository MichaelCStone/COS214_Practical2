#include "Infantry.h"
#include "Soldiers.h"

Infantry::Infantry() : Soldiers(100, 30, 15, 50, "Infantry")
{
}

Soldiers* Infantry::clonis()
{
    return new Infantry(*this);
}