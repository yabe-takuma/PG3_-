#include <functional>
#include<thread>
#include<stdio.h>
void Double(int num) {
	num *= 2;
	printf("num*2: %d\n", num);
};

void AddTwo(int num)
{
	num += 2;
	printf("num+2: %d\n", num);
};
int main() {
	int num = 3;
	std::function<void(int)> Triple = [=](int num)
		{
			num *= 3;
			printf("num*3: %d\n", num);
		};

	std::function<void(int)> AddThree = [=](int num)
		{
			num += 3;
			printf("num+3: %d\n", num);
		};

	std::thread th1(Double, num);
	std::thread th2(AddTwo, num);

	th1.join();
	th2.join();

	return 0;
}