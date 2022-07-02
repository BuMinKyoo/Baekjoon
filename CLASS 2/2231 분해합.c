#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int N, dcp_num = 1;
    char s1[8] = {0,};
    int i;
    int dcp_sum = 0;

    scanf("%d", &N);

    while (dcp_num != 1000001)
    {
        i = 0;
        dcp_sum = 0;

        dcp_sum += dcp_num;
        sprintf(s1, "%d", dcp_num);

        while (s1[i] != '\0')
        {
            dcp_sum += s1[i] - '0';
            i++;
        }

        if (dcp_sum == N)
        {
            printf("%d", dcp_num);
            return (0);
        }
        else if (dcp_num == N)
        {
            printf("%d", 0);
            return (0);
        }

        dcp_num++;
    }

    return (0);
}
