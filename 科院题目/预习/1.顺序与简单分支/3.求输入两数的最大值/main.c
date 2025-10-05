#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (x > y)
    {
        printf("%d\n", x);
        return 0;
    }
    else
    {
        printf("%d\n", y);
        return 0;
    }
    return 0;
}