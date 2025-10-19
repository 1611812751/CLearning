#include <stdio.h>

int main()
{
    int input = -2;
    int max = 0;
    scanf("%d", &max);
    while (input != -1)
    {
        scanf("%d", &input);
        if (max < input)
        {
            max = input;
        }
    }
    printf("%d", max);
    return 0;
}