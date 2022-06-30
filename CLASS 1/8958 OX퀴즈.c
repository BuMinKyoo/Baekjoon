#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int testcaseN;
    int sum = 0;
    char c;

    scanf("%d", &testcaseN);
    c = getchar();

    int num;
    while (testcaseN)
    {
        num = 1;
        while (1)
        {
            c = getchar();
            if (c == 'O')
            {
                sum += num;
                num++;
            }
            else if(c == 'X')
            {
                num = 1;
            }
            else
            {
                printf("%d\n", sum);
                sum = 0;
                break;
            }
        }
        testcaseN--;
    }

    return (0);
}
