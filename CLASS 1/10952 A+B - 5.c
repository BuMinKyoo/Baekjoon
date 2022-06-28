#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
	int A = 0;
	int B = 0;

	while (1)
	{
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0)
		{
			break;
		}
		printf("%d\n", A + B);
	}

	return 0;
}
