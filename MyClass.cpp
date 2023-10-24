#include "MyClass.h"
#include<stdio.h>
void MyClass::Initialize()
{
	(this->*spFuncTable[0])();
	(this->*spFuncTable[1])();
}
void MyClass::Func1()
{
	printf("test\n");
}

void MyClass::Func2()
{
	printf("test2");
}

void (MyClass::*MyClass::spFuncTable[])() = {
	&MyClass::Func1,
	&MyClass::Func2
};
