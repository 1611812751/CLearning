#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int input = 0;
        int sum = 0;
        while (1)
        {
            scanf("%d", &input);
            if (input == -1)
            {
                break;
            }

            sum += input;
        }
        printf("%d\n", sum);
    }
}