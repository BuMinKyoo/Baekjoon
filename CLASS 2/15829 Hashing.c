#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int L;
    scanf("%d", &L);

    char str[27];
    for (int i = 0; i < 27; i++)
    {
        if (i != 26)
            str[i] = i + 97;
        else
            str[i] = '\0';
    }

    char input_str[51] = { 0, };
    scanf("%s", &input_str);

    long long int sum = 0;
    long long int thirty_one;
    for (int i = 0; i < L; i++)
    {
        thirty_one = 1;
        for (int j = 0; j < 26; j++)
        {
            if (input_str[i] == str[j])
            {
                for (int k = 0; k < i; k++)
                {
                    thirty_one *= 31;
                    thirty_one %= 1234567891;
                }
                sum += ((j + 1) * (thirty_one % 1234567891)) % 1234567891;
                break;
            }
        }
    }
    printf("%lld", sum % 1234567891);

    return (0);
}
