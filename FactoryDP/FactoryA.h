#pragma once
#include "Factory.h"

class FactoryA :
    public Factory
{
public:
    FactoryA();
    virtual ~FactoryA();
    AbstractObject* do_create_object();
};

