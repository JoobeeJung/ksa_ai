#include <stdio.h>

double avg(double ary[],int);

int main(void)
{
	double ary[10];
	int i = 0;
	int count = 0;

	count = sizeof(ary) / sizeof(ary[0]);

	for (i = 0; i < count; i++)
	{
		scanf_s("%lf", &ary[i]);
	}
	
	double* p = ary;
	avg(p, count);

	return 0;
}


double avg(double *p, int count)
{
	double avg_value;
	double ary[10] = { 0 };
	double sum = 0;

	for (int i = 0; i < count; i++) {
		sum += p[i];
	}
	avg_value = sum / count;

	printf("ЦђБе : %lf", avg_value);

	return avg_value;
}