#include<stdio.h>
#include"Min.h"






int main() {

	Min<int, int>b1(20, 10);
	Min<float, float>b2(13.5f, 15.5f);

	Min<float, int>b3(20.8, 30);
	Min<double, int>b4(40.5326f,41 );

	Min<float, double>b5(73.9f, 73.9874f);
	Min<double, double>b6(10.4898f, 10.42109f);

	printf("%d\n", b1.Minjugement());

	printf("%f\n", b2.Minjugement());

	printf("%f\n", b3.Minjugement());

	printf("%lf\n", b4.Minjugement());

	printf("%f\n", b5.Minjugement());

	printf("%lf\n", b6.Minjugement());

	return 0;
}




