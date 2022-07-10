#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int line = 0;
    int index = 0;
    scanf("%d %d", &line, &index);

    char board[51][51] = { 0, };
    int n = 0;
    for (int k = 0; k < line; k++)
    {
        scanf("%s", board[n++]);
    }

    int modify_count1 = 0;
    int modify_count2 = 0;
    int min_modify_count = 64;
    int flage = 0;

    for (int y = 0; y < line - 7; y++)
    {
        for (int x = 0; x < index - 7; x++)
        {
            for (int i = 0; i < 8; i++)
            {
                if (flage == 0)
                    flage = 1;
                else
                    flage = 0;

                for (int j = 0; j < 8; j++)
                {
                    if (flage == 0)
                        flage = 1;
                    else
                        flage = 0;

                    if (flage == 1 && board[i + y][j + x] == 'W')  // WBWBWBWB
                        modify_count1++;
                    else if (flage == 0 && board[i + y][j + x] == 'B')
                        modify_count1++;

                    if (flage == 1 && board[i + y][j + x] == 'B')  // BWBWBWBW
                        modify_count2++;
                    else if (flage == 0 && board[i + y][j + x] == 'W')
                        modify_count2++;
                }
            }
            
            if (min_modify_count > modify_count1)
            {
                min_modify_count = modify_count1;
            }
            if (min_modify_count > modify_count2)
            {
                min_modify_count = modify_count2;
            }
            modify_count1 = 0;
            modify_count2 = 0;
        }
    }

    printf("%d", min_modify_count);

    

    return (0);
}
