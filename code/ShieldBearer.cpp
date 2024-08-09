#include "ShieldBearer.h"
#include "Soldiers.h"

ShieldBearer::ShieldBearer() : Soldiers(100, 10, 60, 10, "ShieldBearer")
{
}

Soldiers* ShieldBearer::clonis()
{
    return new ShieldBearer(*this);
}