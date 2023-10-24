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


	std::function<int(int)> fx = [=](int i) {return i;};
	auto fx2 = [](int i) {return i;};

	int name = 0;


	scanf_s("%d", &name);
	name = DiseRecyrsive(name);
	fx(1);
	fx2(1);
	return 0;
}
