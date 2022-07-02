#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    while (1)
    {
        scanf("%d %d %d", &num1, &num2, &num3);
        if (num1 == 0 && num2 == 0 && num3 == 0)
        {
            break;
        }

        if ((num1 * num1) + (num2 * num2) == (num3 * num3) || (num1 * num1) + (num3 * num3) == (num2 * num2) || (num2 * num2) + (num3 * num3) == (num1 * num1))
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
        
    }
    return (0);
}
