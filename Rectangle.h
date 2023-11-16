#pragma once
#include"Shape.h"
class Rectangle : public IShape
{
public:

	void Size();

	void Draw();

private:
	int radius = 30.0f;

	


};

