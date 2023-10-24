#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<time.h>
//macとかのUnix系OSの場合
//#include<unistd.h>



typedef void (*PFunc)(int*);



int DiseRecyrsive(int n) {
	
	if (n == 0||n==1) {
		return 0;
	}

	scanf_s("%d", &n);
	return DiseRecyrsive(n);
	
}

//コールバック関数
void DispResult(int *s) {
	int num = rand() % 6 + 1;
	if (num == 2 || num == 4 || num == 6) {
		printf("答えは%d丁(1)でした。\n", num, *s);
	}
	if (num == 1 || num == 3 || num == 5) {
		printf("答えは%d半(0)でした。\n", num, *s);
	}

}

void setTimeout(PFunc p, int second) {
	
	//コールバック関数を呼び出す
	Sleep(second*1000);
	//macとかUnix系OSの場合
	//sleep(second);


	p(&second);
}

int main() {



	printf("0か1を入力してください\n");
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
