#include <stdio.h>


int main(void)
{
#if 0
	int a = 0, b =0;

	if (a > 0)
	{
		b = 1;
	}
	else if (a==0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}
	printf("b:%d\n", b);
	return 0;
#elif 0
	int a = 20, b = 10;
	if (a > 10)
	{
		if (b >= 0)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}
	printf("a : %d, b: %d\n", a, b);
	return 0;

#elif 1
	int a = 10, b = 20;
	if (a < 0)
	{
		if (b > 0)
		{
			printf("0k");
		}
	}
	else
	{
		printf("0k");
	}

	//printf("a : %d, b: %d\n", a, b);
	return 0;
#endif
	return 0;
}
