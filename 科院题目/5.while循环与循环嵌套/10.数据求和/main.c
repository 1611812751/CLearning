#include <stdio.h>

int main()
{

    while (1)
    {
        int n = 0;
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int input = 0;
            scanf("%d", &input);
            sum += input;
            if (i == n - 1)
            {
                printf("%d", input);
            }
            else
            {
                printf("%d+", input);
            }
        }
        printf("=%d\n", sum);
    }
}