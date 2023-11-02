#include<stdio.h>
#include"MyClass.h"
#include"Enemy.h"

typedef void (*PFunc)();


//コールバック関数
void Answer() {
	int num = rand() % 6 + 1;
	if (num % 2 == 0) {
		printf("答えは%d丁(1)でした。\n", num);
	}
	else {
		printf("答えは%d半(0)でした。\n", num);
	}


}

void Dinghan(PFunc p, int second) {
	

	//コールバック関数を呼び出す, 3秒まつ
	Sleep(second * 1000);


	//macとかUnix系OSの場合
	//sleep(second);

	// 結果表示
	p();
}

int main() {

	Enemy* enemy=new Enemy();
	enemy->Initialize();

	PFunc p;
	p = Answer; // 関数ポインタに代入するときは関数名そのまま入れる
	Dinghan(p, 3);

	enemy->Update();
	
	return 0;
}
