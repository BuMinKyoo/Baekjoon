#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
	char str[6] = { 0, };
	while (1)
	{
		scanf("%s", str);
		if (str[0] == '0')
			break;

		int i = 0;
		int str_length = 0;
		while (str[i] != '\0')
		{
			str_length++;
			i++;
		}
		int count = str_length / 2;

		int flage = 1;
		i = 0;
		while (count)
		{
			if (str[i] != str[str_length - 1])
			{
				flage = 0;
			}
			i++;
			str_length--;
			count--;
		}

		if (flage == 0)
		{
			printf("no\n");
		}
		else
		{
			printf("yes\n");
		}
	}
    return (0);
}
