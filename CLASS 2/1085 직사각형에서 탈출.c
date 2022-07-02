#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>

int main(void)
{
    int x, y, w, h = 0;
    int xw_distans;
    int yh_distans;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    if ((float)w / 2 >= x)
    {
        xw_distans = x;
    }
    else
    {
        xw_distans = w - x;
    }

    if ((float)h / 2 >= y)
    {
        yh_distans = y;
    }
    else
    {
        yh_distans = h - y;
    }

    printf("%d", xw_distans > yh_distans ? yh_distans : xw_distans);

    return (0);
}
