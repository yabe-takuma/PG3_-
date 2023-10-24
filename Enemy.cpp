#include "Enemy.h"
#include<stdio.h>
void (Enemy::*Enemy::spFuncTable[])() = {
	&Enemy::Proximity,

};


void Enemy::Initialize()
{
	timer_ = Timer;
}

void Enemy::Update()
{
	timer_++;
	switch (phase_) {
	case Phase::Proximity:
	default:
		(this->*spFuncTable[static_cast<size_t>(phase_)])();
	}
	
	
}

void Enemy::Proximity()
{
	
	printf("近接");
	if (timer_ >= 10) {
		phase_ = Phase::Shooting;
		timer_ = 0;
	}
}

void Enemy::Shooting()
{
	if (timer_ >= 10) {
		printf("射撃");
		phase_ = Phase::Leave;
		timer_ = 0;
	}

}

void Enemy::Leave()
{
	if (timer_ >= 10) {
		printf("離脱");
	}
}
