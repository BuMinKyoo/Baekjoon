#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T)
    {
        int nums[14] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
        int k, n;
        scanf("%d %d", &k, &n);
        int index = n - 1;

        while (k)
        {
            for (int i = 0; i < n; i++)
            {
                if (i == 0)
                    continue;
                nums[i] = nums[i - 1] + nums[i];
                index = i;
            }
            k--;
        }
        printf("%d\n", nums[index]);
        T--;
    }

    return (0);
}
