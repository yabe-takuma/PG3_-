#include<stdio.h>
#include <functional>

int main() {
	
	std::function<int(int)> fx = [=](int i) {return i + 1; };
	auto fx2 = [](int i) {return i + 1; };

	printf("%d\n", fx(2));
	printf("%d", fx2(2));
	return 0;
}
