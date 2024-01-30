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

	//マルチスレッドの場合
	std::thread th1(thread1);
	std::thread th2(thread2);
	std::thread th3(thread3);
	
	
	th1.join();
	th2.join();
	th3.join();

	return 0;
}