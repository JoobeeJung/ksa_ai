#include <stdio.h>
#define test 0

int main(void)
{
#if 0
    int rank = 2, m = 0;

    switch (rank)
    {
    case 1:
        m = 300;
        break;
    case 2:
        m = 200;
        break;
    case 3:
        m = 100;
        break;
    default:
        m = 10;
        break;
    }
    printf("m : %d\n", m);
    return 0;

#elif 0
    int a = 10;
    int b = 12;

    printf(" a & b : %d\n", a & b);
    printf(" a ^ b : %d\n", a ^ b);
    printf(" a | b : %d\n", a | b);
    printf(" ~a : %d\n", ~a);
    printf(" a << 1 : %d\n", a << 1);
    printf(" a >> 2 : %d\n", a >> 2);

#elif 0 
    int result_bitAnd = a & b;
    int result_bitXor = a ^ b;
    int result_bitOr = a | b;
    int result_bitComple = -a;
    int bitShift_left = a << 1;
    int bitShift_right = a >> 2;

    printf("result_bitAnd : %d\n", result_bitAnd);
    printf("result_bitXor : %d\n", result_bitXor);
    printf("result_bitOr : %d\n", result_bitOr);
    printf("result_bitComple: %d\n", result_bitComple);
    printf("bitShift_left : %d\n", bitShift_left);
    printf("bitShift_right : %d\n", bitShift_right);

#elif 0

    int a = 10, b = 20, c = 10;
    int res;

    res = (a > b);
    printf("a>b : %d\n", res);

    res = (a >= b);
    printf("a>=b : %d\n", res);

    res = (a < b);
    printf("a < b : %d\n", res);

    res = (a <= b);
    printf("a <= b : %d\n", res);

    res = (a <= c);
    printf("a <= c : %d\n", res);

    res = (a == b);
    printf("a == b : %d\n", res);

    res = (a != c);
    printf("a != c : %d\n", res);

    return 0;
#elif 0
    int num = 100;
    float fnum = 8.5;
    double dnum = 8.5;
    int arr[5] = { 0, };
    printf("%d\n", num);
    int arr2[5];
    char f[6] = { 'a','p','p','l','e' };
    char f2[6] = "apple";
    char* str = "apple";

    printf("%s\n", str);
    printf("%s\n", f);

    return 0;
#elif 1
    char grade;
    char name[20];

    printf("학점 입력 : ");
    scanf("%c", &grade);
    printf("이름 입력 : ");
    scanf("%s", name);
    printf("%s의 학점은 %c입니다. \n", name, grade);

    return 0;
#endif
    return 0;
}