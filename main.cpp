#include<stdio.h>
#include"MyClass.h"
#include"Enemy.h"
#include<Windows.h>


typedef void (*PFunc)();


void Dinghan(Enemy* enemy,int second) {

	
	//コールバック関数を呼び出す, 3秒まつ
	Sleep(second * 1000);
	
	enemy->Update();
	
}



int main() {

	bool jugementflag = true;
	
	Enemy* enemy = new Enemy();

	
	
	


	
	while (true) {
	for (int i = 0; i < 3; i++) {
		
		Dinghan( enemy,3);
	}
		
		return 0;
	}


	
	return 0;
}
