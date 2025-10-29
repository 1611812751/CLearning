#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        for (int k = 0; k < n; k++)
        {
            printf("$");
        }
        printf("\n");
    }
}
