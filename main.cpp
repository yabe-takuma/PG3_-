#include<stdio.h>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
int main() {
	IShape* shape_eaters[2];

	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
		{
			shape_eaters[i] = new Circle;
		}
		else {
			shape_eaters[i] = new Rectangle;
		}

	}

	for (int i = 0; i < 2; i++) {
		shape_eaters[i]->Size();
	}

	for (int i = 0; i < 2; i++) {
		shape_eaters[i]->Draw();
	}

	for (int i = 0; i < 2; i++)
	{
		delete shape_eaters[i];
	}
	
	return 0;
}






