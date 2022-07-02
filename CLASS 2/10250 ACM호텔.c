#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int T, H, W, N, temp = 0;
    int room_num;
    int room_floor;

    scanf("%d", &T);

    while (T)
    {
        room_num = 1;
        room_floor = 1;

        scanf("%d %d %d", &H, &W, &N);

        while (H < N)
        {
            N -= H;
            room_num++;
        }

        room_floor = N;

        if (room_num < 10)
        {
            printf("%d%d%d\n", room_floor, 0, room_num);
        }
        else
        {
            printf("%d%d\n", room_floor, room_num);
        }
        

        T--;
    }
    return (0);
}
