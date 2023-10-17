#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<time.h>
//macとかのUnix系OSの場合
//#include<unistd.h>



typedef void (*PFunc)(int*);

void Judgement(int num) {
	if (num == 1 ||num== 3 || num==5)
	{
		printf("答えは%d半でした。", num);
	}
	else if (num == 2 || num==4 || num==6)
	{
		printf("答えは%d丁でした。", num);
	}
}

//コールバック関数
void DispResult(int *s) {
	//printf("%d待って実行されたよ\n", *s);
	
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
	time_t currentTime = time(nullptr);
	srand((time_t)currentTime);
	char name[8];
	int number = rand()  %6+1;
	scanf_s("%s", name,8);
	
	PFunc p;
	p=DispResult;
	setTimeout(p, 3);
	Judgement(number);
	
	return 0;
}
