#pragma once
class MyClass
{
public:
	void Initialize();
	//自作クラス
	void Func1();
	void Func2();
private:
	//メンバ関数ポインタのテーブル
	static void (MyClass::*spFuncTable[])();
};

