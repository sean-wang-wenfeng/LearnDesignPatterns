#pragma once
#include <iostream>
#include <cstring>
class AbstractObject
{
public:
    virtual void ShowName() =0;
public:
    AbstractObject(std::string deviceName);

    virtual ~AbstractObject();
};

