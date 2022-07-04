#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int N;
    int score = 1;
    int plus_num = 6;
    int distance = 1;
    scanf("%d", &N);

    while (score < N)
    {
        score += plus_num;
        plus_num += 6;
        distance++;
    }

    printf("%d", distance);

    return (0);
}
