#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int j = n;
    for (int i = 1; i <= n; i++, j--)
    {
        for (int k = 1; k < j; k++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }

        printf("\n");
    }
}