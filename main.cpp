#include<stdio.h>
template <typename Type>

Type min(Type a, Type b) {
	if (a >= b)
	{
		return static_cast<Type>(a);
	}
	else
	{
		return static_cast<Type>(b);
	}
}
template <>
char min<char>(char a, char b) {
	return printf("数字は代入できません");
}

int main() {
	
	printf("%d\n", min<int>(30, 50));

	printf("%f\n", min<float>(3.0f, 2.0f));

	printf("%lf\n", min<double>(3.13f, 5.13f));

	min<char>('A', 'B');

	return 0;
}
