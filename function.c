#include <stdio.h>

void print_char(char cch, int count);
void print_line(void);
void fruit(int count, int num);

int sum(int x, int y);
int get_num(void);
int main(void)
{
#if 0
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result : %d\n", result);
	return 0;
#elif 0
	int result;
	result = get_num();
	printf("반환값 : %d\n", result);
#elif 0
	print_char('@', 5);
	return 0;
#elif 0
	print_line();
	printf("학번	이름	전공	학점\n");
	print_line();

	return 0;
#elif 1

	int num;

	printf("양수 입력 : ");
	scanf_s("%d", &num);
	fruit(1, num);
	return 0;

#endif
	return 0;
}

void fruit(int count, int num)
{	
	printf("apple\n");

	if (count == num) return;
	fruit(count + 1,num);
	//printf("jam\n");
}

void print_line(void)
{
	int i;
	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}
void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);

	}
	return;
}

int get_num(void)
{
	int num;
	printf("양수 입력 : ");
	scanf_s("%d", &num);

	return num;
}
int sum(int x, int y)
{
	int temp;
	temp = x + y;
	return temp;
}