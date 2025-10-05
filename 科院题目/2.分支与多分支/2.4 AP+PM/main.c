#include <stdio.h>

int main()
{
    int time, m, s, h;
    scanf("%d", &time);

    // h = input / 3600;
    // m = input % 3600 / 60;
    // s = input % 60;

    if (time < 43200)
    {
        h = time / 3600;
        m = time % 3600 / 60;
        s = time % 60;
        printf("AM %02d:%02d:%02d\n", h, m, s);
    }
    else
    {
        h = (time - 43200) / 3600;
        m = (time - 43200) % 3600 / 60;
        s = (time - 43200) % 60;
        printf("PM %02d:%02d:%02d\n", h, m, s);
    }
}