#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main()
{
	int Garbage = 0;
	scanf("%d", &Garbage);
	Garbage = getchar();

	int sum = 0;
	int num = getchar();
	while (num != '\n')
	{
		sum += num - 48;
		num = getchar();
	}
	printf("%d\n", sum);
	return 0;
}
