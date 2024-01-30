#include<stdio.h>
#include<thread>

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

	


	//マルチスレッドの場合
	std::thread th1(thread1);
	th1.join();
	std::thread th2(thread2);
	th2.join();
	std::thread th3(thread3);
	th3.join();
	

	return 0;
}