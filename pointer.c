#include <stdio.h>

int main(void)
{
#if 0
	int a;
	double b;
	char c;

	printf("int�� ������ �ּ�: %u\n", &a);
	printf("double�� ������ �ּ�: %u\n", &b);
	printf("char�� ������ �ּ�: %u\n", &c);

	return 0;
#elif 0
	int a;
	int* pa;

	pa = &a;
	*pa = 10;

	printf("�����ͷ� a �� ��� : %d\n", *pa);
	printf("���������� a�� ��� : %d\n", a);

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
	
	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);

	return 0;
#elif 1
	int a = 10, b = 20;
	const int* pa = &a;

	printf("���� a �� : %d\n", *pa);
#endif
	return 0;
}