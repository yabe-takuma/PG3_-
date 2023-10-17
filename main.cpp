#include<stdio.h>
#include<Windows.h>
#include<string.h>
//macとかのUnix系OSの場合
//#include<unistd.h>

#define INPUT_STR "奇数"


typedef void (*PFunc)(int*);
//コールバック関数
void DispResult(int *s) {
	printf("%d待って実行されたよ\n", *s);
}

void setTimeout(PFunc p, int second) {
	//コールバック関数を呼び出す
	Sleep(second*1000);
	//macとかUnix系OSの場合
	//sleep(second);


	p(&second);
}

int main() {
	printf("start\n");
	char name[8]="奇数";
	char name2[8] = "奇数";
	scanf_s("%s", name,8);
	if (strcmp(name,"奇数") == 0)
	{
		printf("%s", name);
	}
	PFunc p;
	p = DispResult;
	setTimeout(p, 5);
	
	
	return 0;
}
