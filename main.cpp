#include<stdio.h>
#include<thread>
#include <functional>

void Double(int num) {
	num *= 2;
	printf("num*2: %d\n", num);
};

void AddTwo(int num)
{
	num += 2;
	printf("num+2: %d\n", num);
};

void thread1()
{
	printf("thread 1\n");
}

void thread2()
{
	printf("thread 2\n");
}

void thread3()
{
	printf("thread 3\n");
}

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


	//マルチスレッドの場合
	std::thread th1(thread1);
	th1.join();
	std::thread th2(thread2);
	th2.join();
	std::thread th3(thread3);
	th3.join();
	

	return 0;
}