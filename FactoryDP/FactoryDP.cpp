// FactoryDP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include "Factory.h"
#include "FactoryA.h"
#include "FactoryB.h"
#include "AbstractObject.h"
using std::cout;
using std::endl;
using std::string;
namespace
{
enum ObjectType
{
    TypeA,
    TypeB
};

void TestFactory(ObjectType type)
{
    Factory* fac = nullptr;
    if (type == TypeA)
        fac = new FactoryA();
    else
        fac = new FactoryB();

    
    AbstractObject* obj = fac->CreateObject();
    
    obj->ShowName();
}
} //end of namespace

int _tmain(int argc, _TCHAR* argv[])
{
    TestFactory(TypeA);
    TestFactory(TypeB);
	return 0;
}

