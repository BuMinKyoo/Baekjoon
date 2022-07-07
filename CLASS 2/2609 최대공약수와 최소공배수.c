#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    scanf("%d %d", &num1, &num2);

    int divisor = num1 > num2 ? num2 : num1;
    while (divisor)
    {
        if (num1 % divisor == 0 && num2 % divisor == 0)
            break;
        divisor--;
    }

    int multiple = 0;
    int num1_mul = num1;
    int num2_mul = num2;
    while (1)
    {
        if (num1 > num2)
            num2 += num2_mul;
        else if (num1 < num2)
            num1 += num1_mul;
        else
        {
            multiple = num1;
            break;
        }
    }

    printf("%d\n%d", divisor, multiple);

    return (0);
}
