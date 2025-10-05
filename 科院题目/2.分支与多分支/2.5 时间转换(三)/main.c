#include <stdio.h>

int main()
{
    int h, time, m, s, day;
    scanf("%d", &time);
    if (time > 86400)
    {
        day = time / 86400;
        h = (time - day * 86400) / 3600;
        m = (time - day * 86400) % 3600 / 60;
        s = (time - day * 86400) % 60;
        printf("%d day %d:%d:%d\n", day, h, m, s);
    }
    else
    {
        h = time / 3600;
        m = time % 3600 / 60;
        s = time % 60;
        printf("%d:%d:%d\n", h, m, s);
    }
}