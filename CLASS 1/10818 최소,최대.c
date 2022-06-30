#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int max = -1000000;
    int min = 1000000;

    int N = 0;
    scanf("%d", &N);

    int input_num = 0;
    while (N)
    {
        scanf("%d", &input_num);
        if (input_num > max)
        {
            max = input_num;
        }
        if (input_num < min)
        {
            min = input_num;
        }
        N--;
    }
    printf("%d %d", min, max);
    return (0);
}
