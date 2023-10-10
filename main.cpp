#include<stdio.h>
int Recursive(int num) {
	if (num >= 1072) {
		return num;
	}
	return (Recursive(num * 2 - 50 + num));
}

int main() {
	int num = 100; //再帰的な賃金

	int result; //計算結果

	result = Recursive(num);
	printf("%d　再帰的な賃金\n", result);
	return 0;
}
