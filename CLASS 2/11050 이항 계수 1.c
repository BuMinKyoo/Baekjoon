#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int N = 0, K = 0;
    scanf("%d %d", &N, &K);

    int numerator = 1;

    for (int i = 0; i < K; i++)
    {
        numerator *= N;
        N--;
    }

    int denominator = 1;

    while (K > 0)
    {
        denominator *= K;
        K--;
    }

    printf("%d", numerator / denominator);
    return (0);
}
