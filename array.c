#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

int main(void)
{
#if 0
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf_s("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);
#elif 0
	int score[5];
	int i;
	int total = 0;
	float avg;

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &score[i]);
	}
	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("���: %.1lf\n", avg);

	return 0;
#elif 0
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++)
	{
		scanf_s("%d", &score[i]);
	}
	for (i = 0; i < count; i++)
	{
		total += score[i];
	}
	avg = total / (double)count;

	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("��� : %.1lf\n", avg);
	return 0;
#elif 0
	char str[80] = "applejam";

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	gets(str);
	printf("�Է� �� ���ڿ� : %s\n", str);

	return 0;
#elif 0
	char str1[80] = "cat";
	char str2[80];

	strcpy_s(str1, 80, "tiger");
	strcpy_s(str2, 80, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
#elif 0
	char str[80];
	printf("���ڿ� �Է� : ");
	gets(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);

	return 0;
#elif 1
	char str[5];
	str[0] = '0';
	str[1] = 'K';
	printf("%s\n", str);
	return 0;
#endif
	return 0;
}