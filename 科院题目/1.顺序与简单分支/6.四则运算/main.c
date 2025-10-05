#include <stdio.h>

int main()
{
    int sum, sub, multi;
    int x, y;
    scanf("%d%d", &x, &y);
    sum = x + y;
    sub = x - y;
    multi = x * y;
    printf("%d %d %d\n", sum, sub, multi);
    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", multi);
}
