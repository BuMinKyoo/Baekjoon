#include <stdio.h>
#include <string.h>

int main(void)
{
    char ascending[] = "1 2 3 4 5 6 7 8";
    char descending[] = "8 7 6 5 4 3 2 1";

    char str[16];
    fgets(str, 16, stdin);

    if (strcmp(str, ascending) == 0)
    {
        printf("ascending");
    }
    else if (strcmp(str, descending) == 0)
    {
        printf("descending");
    }
    else
    {
        printf("mixed");
    }
    return (0);
}
