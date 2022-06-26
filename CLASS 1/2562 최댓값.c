#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main()
{
	int num = 0;
	int max = 0;

	int count = 9;
	int number = 0;
	while (count)
	{
		scanf("%d", &num);

		if (num > max)
		{
			max = num;
			number = 10 - count;
		}
		count--;
	}

	printf("%d\n%d", max,number);
}
