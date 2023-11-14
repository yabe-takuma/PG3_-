#pragma once
class DeathEater
{
public:
	//コンストラクタ(宣言)
	DeathEater();
	//デストラクタ(宣言)
	virtual ~DeathEater();

	virtual void Generate();

	//攻撃(宣言)
	virtual void Attack();

	virtual void Destruction();

protected:
	//名前
	const char* name;

};

