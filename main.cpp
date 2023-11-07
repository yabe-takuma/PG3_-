#include<stdio.h>
#include"MyClass.h"
#include"Enemy.h"





int main() {

	bool jugementflag = true;
	

	Enemy* enemy = new Enemy();
	enemy->Initialize();
	


	
	/*while (jugementflag) {*/
	/*for (int i = 0; i < 3; i++) {*/
		enemy->Update();
	/*}*/
	/*}*/


	
	return 0;
}
