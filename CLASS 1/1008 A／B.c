#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main()
{
	double A;
	double B;
	double AB;
	scanf("%lf %lf", &A, &B);

	AB = A / B;

	printf("%.9lf", AB);
}
