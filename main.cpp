#include<stdio.h>
#include"MyClass.h"
#include"Enemy.h"
int main() {

	Enemy* enemy=new Enemy();
	enemy->Initialize();

	PFunc p;
	p = Answer; // 関数ポインタに代入するときは関数名そのまま入れる
	Dinghan(p, 3);

	enemy->Update();
	
	return 0;
}
