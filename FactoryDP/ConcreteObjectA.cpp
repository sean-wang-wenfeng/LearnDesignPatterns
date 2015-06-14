#include "stdafx.h"
#include "ConcreteObjectA.h"

ConcreteObjectA::ConcreteObjectA(std::string deviceName)
    : AbstractObject(deviceName)
    , m_deviceName(deviceName)
{
    std::cout << "ConcreteObjectA constructor" << std::endl;
}

ConcreteObjectA::~ConcreteObjectA()
{
}

void ConcreteObjectA::ShowName()
{
    std::cout << "name: " << m_deviceName.c_str() << std::endl;
}
