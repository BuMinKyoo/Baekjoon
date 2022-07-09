#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int num;
    int score = 0;
    while (N)
    {
        scanf("%d", &num);

        int divide = 2;

        if (num == 2)
            score++;
        else if (num > 2)
        {
            while (1)
            {
                if (num == divide)
                {
                    score++;
                    break;
                }
                else if (num % divide == 0)
                    break;
                divide++;
            }
        }
        N--;
    }

    printf("%d", score);
    return (0);
}
