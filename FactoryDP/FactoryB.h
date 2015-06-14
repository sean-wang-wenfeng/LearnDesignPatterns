#pragma once
#include "Factory.h"

class FactoryB :
    public Factory
{
public:
    FactoryB();
    virtual ~FactoryB();
    AbstractObject* do_create_object();
};

