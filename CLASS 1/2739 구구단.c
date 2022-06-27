#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
	int N = 0;
	int N_multiplication;
	scanf("%d", &N);

	for (int i = 1; i <= 9; i++)
	{
		N_multiplication = N * i;
		printf("%d * %d = %d\n", N, i, N_multiplication);
	}
}
