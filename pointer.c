#include <stdio.h>

int main(void)
{
#if 0
	int a;
	double b;
	char c;

	printf("int형 변수의 주소: %u\n", &a);
	printf("double형 변수의 주소: %u\n", &b);
	printf("char형 변수의 주소: %u\n", &c);

	return 0;
#elif 0
	int a;
	int* pa;

	pa = &a;
	*pa = 10;

	printf("포인터로 a 값 출력 : %d\n", *pa);
	printf("변수명으로 a값 출력 : %d\n", a);

	return 0;
#elif 0
	int a = 10, b = 15, total;
	double avg;
	int *pa, *pb;
	int *pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;
	*pt = *pa + *pb;
	*pg = *pt / 2.0;
	
	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;
#elif 1
	int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a 값 : %d\n", *pa);
#endif
	return 0;
}