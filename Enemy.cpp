#include "Enemy.h"
#include<stdio.h>
void (Enemy::*Enemy::spFuncTable[])() = {
	&Enemy::Proximity,
	&Enemy::Shooting,
	&Enemy::Leave,
};




void Enemy::Update()
{
	

	
		(this->*spFuncTable[static_cast<size_t>(phase_)])();
		
	
	
}

void Enemy::Proximity()
{
	
	

		printf("近接");
		
	
		phase_ = Phase::kShooting;
		
}

void Enemy::Shooting()
{
	
		printf("射撃");
		
		phase_ = Phase::kLeave;
		

}

void Enemy::Leave()
{
	
		printf("離脱");
		
}


