#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int N, M;
    int sum, close_sum = 0;
    int s1[100] = { 0, };

    scanf("%d %d", &N, &M);

    int N_count = N;
    int index = 0;
    while (N_count)
    {
        scanf("%d", &s1[index]);
        index++;
        N_count--;
    }

    int num1, num2, num3;
    int i = 0, j = 0, k = 0;
    while (i <= N - 3)
    {
        num1 = s1[i];
        j = i + 1;
        while (j <= N - 2)
        {
            num2 = s1[j];
            k = j + 1;
            while (k <= N - 1)
            {
                num3 = s1[k];

                sum = num1 + num2 + num3;
                if (sum <= M && sum > close_sum)
                {
                    close_sum = sum;
                }
                k++;
            }
            j++;
        }
        i++;
    }
    printf("%d", close_sum);

    return (0);
}
