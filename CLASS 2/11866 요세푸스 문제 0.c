#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>


int main(void)
{
    int N;
    int K = 0;
    int num = 0;
    int nums[1000];

    scanf("%d %d", &N, &K);
    printf("<");

    int count = 0;
    int i = 0;
    int print_count = 0;
    while (1)
    {
        count = K;
        while (count > 0)
        {
            num++;
            if (num > N)
                num = 1;

            while (1)
            {
                int flage = 0;
                for (int j = 0; j < i; j++)
                {
                    if (num == nums[j])
                    {
                        flage = 1;
                        num++;
                        if (num > N)
                            num = 1;
                        break;
                    }
                }

                if (flage == 0)
                    break;
            }
            count--;
        }
        nums[i++] = num;
        print_count++;
        
        printf("%d", num);
        if (print_count != N)
            printf(", ");
        if (print_count == N)
        {
            printf(">");
            break;
        }
    }
    return (0);
}
