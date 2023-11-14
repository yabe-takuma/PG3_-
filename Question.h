#pragma once
class Question
{
public:

	enum class Phase {
		kGenerate,
		kAttack,
		kDestruction,
	};

	void Generate();

	void Attack();

	void Destruction();

private:
	Phase phase_;

	static void (Question::* spPhaseTable[])();

};

