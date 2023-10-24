#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<time.h>
//macとかのUnix系OSの場合
//#include<unistd.h>



typedef void (*PFunc)(int*);



int DiseRecyrsive(int n) {
	
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	if (n >= 2||n<=-1) {
		return DiseRecyrsive(n);
	}
}

//コールバック関数
void DispResult(int *s) {
	int num = rand() % 6 + 1;
	
	printf("答えは%dでした。\n", num,*s);
	
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
	int name=0;

	scanf_s("%d", &name);
	name= DiseRecyrsive(name);
	
	PFunc p;
	p = DispResult;
	setTimeout(p, 3);
	
	
	
	return 0;
}
