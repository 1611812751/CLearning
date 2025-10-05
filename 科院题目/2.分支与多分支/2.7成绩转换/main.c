#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x >= 90)
    {
        printf("优");
        return 0;
    }

    if (x >= 80)
    {
        printf("良");
        return 0;
    }

    if (x >= 70)
    {
        printf("中等");
        return 0;
    }

    if (x >= 60)
    {
        printf("及格");
        return 0;
    }

    if (x < 60)
    {
        printf("不及格");
        return 0;
    }
    return 0;
}