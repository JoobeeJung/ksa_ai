#include <stdio.h>


int main(void)
{
#if 0
	int a = 1;

	while (a < 10)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

#elif 0
	int a = 1;
	int i;

	for (i = 0; i < 3; i++)
	{
		a = a * 2;
}
	printf("a : %d\n", a);

	return 0;
#elif 0
	int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10);
	printf("a : %d\n", a);

	return 0;
#elif 0
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");

		}
		printf("\n");
	}
	return 0;

#elif 1
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
	}
	printf("누적한 값: %d\n", sum);
	printf("마지막으로 더한 값: %d\n", i);
	return 0;

#endif
	return 0;
}
