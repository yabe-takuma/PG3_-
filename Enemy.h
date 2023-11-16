#pragma once


class Enemy
{
public:
	enum class Phase {
		kProximity,
		kShooting,
		kLeave,
	};

	

	void Update();

	void Proximity();

	void Shooting();

	void Leave();

	

	
private:
	Phase phase_=phase_;
	static void (Enemy::*spFuncTable[])();


	bool timerflag = true;

	
};

