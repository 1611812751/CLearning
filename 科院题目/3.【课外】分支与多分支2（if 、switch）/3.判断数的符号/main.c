#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    if (x > 0 && y < 0 || x < 0 && y > 0)
    {
        printf("unlike signs");
        return 0;
    }
    if (x > 0 && y > 0 || x < 0 && y < 0)
    {
        printf("like signs");
        return 0;
    }
    if (x == 0 && y == 0)
    {
        printf("two zeros");
        return 0;
    }
    if (x == 0 || y == 0)
    {
        printf("one zero");
        return 0;
    }
}