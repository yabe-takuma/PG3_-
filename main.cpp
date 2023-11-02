#include<stdio.h>
#include"MyClass.h"
#include"Enemy.h"

void Dinghan(PFunc p, int second) {
	// プレイヤーの入力処理、奇数or偶数入力させる

	Judgement();

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
