#include <stdio.h>

int main()
{
    int n, m = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        int input = 0;

        int count = 0;
        for (int k = 0; k < m; k++)
        {
            scanf("%d", &input);
            if (input > 6000)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}