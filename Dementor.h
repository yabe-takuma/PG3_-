#pragma once
#include"DeathEater.h"
class Dementor : public DeathEater
{
public:

	enum class Phase {
		kGenerate,
		kAttack,
		kDestruction,
	};

	void Generate() override;

	void Attack() override;

	void Destruction() override;

	

private:
	Phase phase_=phase_;

	static void (Dementor::* spPhaseTable[])();

};

