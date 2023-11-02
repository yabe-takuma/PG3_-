#pragma once
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

	static const int Timer = 10;

private:
	Phase phase_=phase_;
	static void (Enemy::*spFuncTable[])();
	int timer_;
};

