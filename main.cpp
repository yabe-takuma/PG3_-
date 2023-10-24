#include<stdio.h>
#include <functional>

typedef void (*PFunc)(int*);

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
	auto fx2 = [](int i,) {
		Sleep(second * 1000);
		


		i(&second); 
		};

	printf("%d\n", fx(2));
	printf("%d", fx2(2));
	return 0;
}
