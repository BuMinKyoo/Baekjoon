#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j <= n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
