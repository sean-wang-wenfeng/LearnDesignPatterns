#include "stdafx.h"
#include "Factory.h"

Factory::Factory()
{
}

Factory::~Factory()
{
}

AbstractObject * Factory::CreateObject()
{
    return this->do_create_object();
}

