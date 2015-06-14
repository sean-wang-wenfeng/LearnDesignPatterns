#pragma once
#include "AbstractObject.h"

class Factory
{
public:
    AbstractObject* CreateObject();
    virtual ~Factory();
protected:
    virtual AbstractObject* do_create_object() = 0;
    Factory();
};

