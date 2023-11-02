#include<stdio.h>
#include"MyClass.h"
#include"Enemy.h"
int main() {

	Enemy* enemy=new Enemy();
	enemy->Initialize();

	enemy->Update();
	
	return 0;
}
