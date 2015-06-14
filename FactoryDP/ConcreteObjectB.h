#pragma once
#include "AbstractObject.h"

class ConcreteObjectB :
    public AbstractObject
{
public:
    ConcreteObjectB(std::string deviceName);
    void ShowName();
    virtual ~ConcreteObjectB();
private:
    std::string m_deviceName;
};

