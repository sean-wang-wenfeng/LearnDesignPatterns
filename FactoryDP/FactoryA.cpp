#include "stdafx.h"
#include "FactoryA.h"
#include "ConcreteObjectA.h"

FactoryA::FactoryA()
{
}

FactoryA::~FactoryA()
{
}

AbstractObject* FactoryA::do_create_object()
{
    return new ConcreteObjectA("TypeA");
}