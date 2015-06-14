#include "stdafx.h"
#include "FactoryB.h"
#include "ConcreteObjectB.h"


FactoryB::FactoryB()
{
}


FactoryB::~FactoryB()
{
}

AbstractObject* FactoryB::do_create_object()
{
    return new ConcreteObjectB("TypeB");
}