#include<stdio.h>
#include <functional>
#include<Windows.h>

typedef void (*PFunc)(int*);

int DiseRecyrsive(int n) {

	if (n == 0 || n == 1) {
		return 0;
	}

	scanf_s("%d", &n);
	return DiseRecyrsive(n);

}

int main() {
	
	PFunc p;


	std::function<int(int)> fx = [=](int i) {
		int num = rand() % 6 + 1;
		if (num == 2 || num == 4 || num == 6) {
			printf("答えは%d丁(1)でした。\n", num, i);
		}
		if (num == 1 || num == 3 || num == 5) {
			printf("答えは%d半(0)でした。\n", num, i);
		}
		return i;
		
		};
	auto fx2 = [](int i,int second) {
		Sleep(second * 1000);
		


		return i;
		};

	int name = 0;


	scanf_s("%d", &name);
	name = DiseRecyrsive(name);
	fx(1);
	fx2(1, 3);
	return 0;
}
