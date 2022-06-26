#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main()
{
	int A;
	int B;
	int AB;
	scanf("%d %d", &A, &B);

	if (A > B)
	{
		printf(">");
	}
	else if (A < B)
	{
		printf("<");
	}
	else if (A == B)
	{
		printf("==");
	}
}
