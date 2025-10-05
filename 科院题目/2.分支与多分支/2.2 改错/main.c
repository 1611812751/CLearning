#include <stdio.h>
int main(void)
{
    int x, y, z;

    printf("Enter x:\n");
    scanf("%d", &x);
    if (x % 10 == 0)
    {
        y = z = x;
        printf("y=%d\nz=%d\n", y, z);
        return 0;
    }
    else
    {
        y = x * 2;
        z = x * 3;
        printf("y=%d\nz=%d\n", y, z);
        return 0;
    }
    return 0;
}