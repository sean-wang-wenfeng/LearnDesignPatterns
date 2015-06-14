#pragma once
#include "AbstractObject.h"

class ConcreteObjectA :
    public AbstractObject
{
public:
    ConcreteObjectA(std::string deviceName);
    void ShowName();
    virtual ~ConcreteObjectA();
private:
    std::string m_deviceName;
};

