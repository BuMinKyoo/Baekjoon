#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
	int A = 0;
	int B = 0;

	while (1)
	{
		if (scanf("%d %d", &A, &B) == -1)
		{
			break;
		}
		printf("%d\n", A + B);
	}

	return 0;
}
