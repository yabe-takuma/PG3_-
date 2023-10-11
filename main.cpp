#include<stdio.h>
#include<Windows.h>
//macとかのUnix系OSの場合
//#include<unistd.h>

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
	char name[] = "奇数";
	scanf_s("%s", name,8);
	printf("%s", name);
	
	PFunc p;
	p = DispResult;
	setTimeout(p, 5);
	return 0;
}
