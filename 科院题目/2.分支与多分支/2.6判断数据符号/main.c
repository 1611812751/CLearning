#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x > 0)
    {
        printf("1\n");
    }
    if (x < 0)
    {
        printf("-1\n");
    }
    if (x == 0)
    {
        printf("0\n");
    }
}
