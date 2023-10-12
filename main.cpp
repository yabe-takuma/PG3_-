#include<stdio.h>
int Recursive(int num1,int num2,int num3,int num4) {
	num4++;
	num2 = num1 + num2;
	num3 = 1072 * num4;
	if ( num3<=num2 )
	{
		return num2;
	}
	
	return num1=Recursive(num1 * 2 - 50,num2,num3,num4);
	
}

int main() {
	int recusivewage = 100; //再帰的な賃金
	int i = 0; //1時間がたっていくにつれて１増加する変数
	int generalwage = 1072;  //一般賃金
	
	int Keep = 0;  //もらった値を保存する変数
	int result; //計算結果

	result = Recursive(recusivewage,Keep,generalwage,i);
	printf("%d　再帰的な賃金\n", result);
	return 0;
}
