#include<stdio.h>
int Recursive(int num1,int num2,int num3) {
	num2++;
	num3=1072* num2;
	if (num1 >= num3) {
		return num1;
	}
	return (Recursive(num1 * 2 - 50 + num1,num2,num3));
}

int main() {
	int recusivewage = 100; //再帰的な賃金
	int i = 1; //1時間がたっていくにつれて１増加する変数
	int generalwage = 0;  //一般賃金
	int result; //計算結果

	result = Recursive(recusivewage,i,generalwage);
	printf("%d　再帰的な賃金\n", result);
	return 0;
}
