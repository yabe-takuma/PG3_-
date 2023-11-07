#pragma once
#include<Windows.h>

typedef void (*PFunc)();

class Enemy
{
public:
	enum class Phase {
		kProximity,
		kShooting,
		kLeave,
	};

	void Initialize();

	void Update();

	void Proximity();

	void Shooting();

	void Leave();

	void Answer();;

	void Dinghan(PFunc p, int second,int num);

private:
	Phase phase_=phase_;
	static void (Enemy::*spFuncTable[])();


	bool timerflag = true;

	PFunc p;
};

