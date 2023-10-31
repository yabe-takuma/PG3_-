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
void Answer() {
	int num = rand() % 6 + 1;
	if (num%2==0) {
		 printf("答えは%d丁(1)でした。\n",num);
	}
	else {
		 printf("答えは%d半(0)でした。\n",num);
	}


}

void Judgement() {
	printf("0か1を入力してください\n");
	time_t currentTime = time(nullptr);
	srand((time_t)currentTime);
	int name = 0;



	scanf_s("%d", &name);
	name = DiseRecyrsive(name);

}

void Dinghan(PFunc p, int second) {
	// プレイヤーの入力処理、奇数or偶数入力させる
	
	Judgement();
	
	//コールバック関数を呼び出す, 3秒まつ
	Sleep(second*1000);
	
	
	//macとかUnix系OSの場合
	//sleep(second);

	// 結果表示
	p(&second);
}

int main() {

	PFunc p;
	p =Answer();
	Dinghan(p, 3);

	
	
	
	
	
	
	return 0;
}
