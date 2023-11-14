#pragma once
#include"DeathEater.h"
class Voldemort : public DeathEater
{
public:
	void Generate();

	void Attack() override;

	void Destruction();
};

