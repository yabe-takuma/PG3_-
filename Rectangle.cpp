#include "Rectangle.h"
#include<stdio.h>

void Rectangle::Size()
{
	radius = radius * radius;
}

void Rectangle::Draw()
{
	printf("%f\n", radius);
}
