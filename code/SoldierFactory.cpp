#include "SoldierFactory.h"

Soldiers* SoldierFactory::create()
{
    return createUnit();
}