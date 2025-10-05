#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int max = n + 10;
    while (n <= max)
    {
        printf("%d ", n);
        n++;
    }

    return 0;
}