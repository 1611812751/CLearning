#include <stdio.h>

int main()
{
    int n;
    int a1, a2, a3 = 0;
    a1, a2 = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i < 2)
        {
            printf("1 ");
            continue;
        }
        a3 = a1 + a2;
        printf("%d ", a3);
        a1 = a2;
        a2 = a3;
    }
}