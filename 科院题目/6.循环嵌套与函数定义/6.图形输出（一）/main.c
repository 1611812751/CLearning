#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = n;
    for (int i = 1; i < n * 2; i += 2, k--)
    {
        for (int j = 1; j < k; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    k = 0;
    for (int i = n * 2 - 1; i > 0; i -= 2, k++)
    {
        if (i == n * 2 - 1)
        {
            continue;
        }

        for (int j = 0; j < k; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}