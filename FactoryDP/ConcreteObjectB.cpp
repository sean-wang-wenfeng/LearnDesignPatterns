#include "stdafx.h"
#include "ConcreteObjectB.h"


ConcreteObjectB::ConcreteObjectB(std::string deviceName)
    : AbstractObject(deviceName)
    , m_deviceName(deviceName)
{
    std::cout << "ConcreteObjectB constructor" << std::endl;
}

ConcreteObjectB::~ConcreteObjectB()
{
}

void ConcreteObjectB::ShowName()
{
    std::cout << "name: " << m_deviceName.c_str() << std::endl;
}
