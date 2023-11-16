#pragma once
#include"Shape.h"
class Circle : public IShape
{
public:

	void Size();

	void Draw();

private:
	float radius = 30.0f;

	float pi = 3.14;

};

