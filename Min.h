#pragma once
template <typename Type1, typename Type2>

class Min
{
public:
	Type1 num1;
	Type2 num2;

	Min(Type1 num1, Type2 num2) :num1(num1), num2(num2) {};

	Type1 Minjugement() {
		if (num1 <= num2)
		{
			return static_cast<Type1>(num1);
		}
		else
		{
			return static_cast<Type2>(num2);
		}
		return 0;
	}


};

