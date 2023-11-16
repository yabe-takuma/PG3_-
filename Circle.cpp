#include "Circle.h"
#include<stdio.h>

void Circle::Size()
{
	radius=radius* radius* pi;
}

void Circle::Draw()
{
	printf("%f",radius);
}
