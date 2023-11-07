#include "Enemy.h"
#include<stdio.h>
void (Enemy::*Enemy::spFuncTable[])() = {
	&Enemy::Proximity,
	&Enemy::Shooting,
	&Enemy::Leave,
};


void Enemy::Initialize()
{
	
	
}

void Enemy::Update()
{
	

	
		(this->*spFuncTable[static_cast<size_t>(phase_)])();
	

	
	
}

void Enemy::Proximity()
{
	
	

		printf("近接");
		//p = Answer; // 関数ポインタに代入するときは関数名そのまま入れる
		Dinghan(p, 3,0);
		//phase_ = Phase::kShooting;
		
}

void Enemy::Shooting()
{
	
		printf("射撃");
		Dinghan(p, 3, 1);
		//phase_ = Phase::kLeave;
		//(this->*spFuncTable[2])();

}

void Enemy::Leave()
{
	
		printf("離脱");
		timerflag = false;
	
}

//コールバック関数
void Enemy::Answer() {
	
	(this->*spFuncTable[1])();
}

void Enemy::Dinghan(PFunc p, int second,int num) {


	//コールバック関数を呼び出す, 3秒まつ
	Sleep(second * 1000);
	if (num == 0) {
		(this->*spFuncTable[1])();
		
	}
	else if(num==1) {
		(this->*spFuncTable[2])();
	}
	//macとかUnix系OSの場合
	//sleep(second);

	// 結果表示
	//p();
}
