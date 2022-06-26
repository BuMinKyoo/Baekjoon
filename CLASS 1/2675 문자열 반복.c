#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main()
{
	int repeatcase = 0;
	scanf("%d", &repeatcase);

	int repeat = 0;
	char str[21] = "";
	while (repeatcase)
	{
		scanf("%d %s", &repeat, str);

		int n = 0;
		while (str[n] != '\0')
		{
			for (int i = 0; i < repeat; i++)
			{
				printf("%c", str[n]);
			}
			n++;
		}
		printf("\n");
		repeatcase--;
	}
}
