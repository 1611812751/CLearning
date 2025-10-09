#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int max;
    for (int i = 0; i < n; i++)
    {

        int input = 0;
        scanf("%d", &input);
        if (i == 0)
        {
            max = input;
        }
        if (input > max)
        {
            max = input;
        }
    }
    printf("%d", max);

    return 0;
}