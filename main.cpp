#include<stdio.h>
int Recursive(int recusivewage,int keep,int generalwage,int num) {
	num++;
	keep = recusivewage + keep;
	generalwage = 1072 * num;
	if ( generalwage<=keep )
	{
		return keep;
	}
	
	return recusivewage=Recursive(recusivewage * 2 - 50,keep,generalwage,num);
	
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
