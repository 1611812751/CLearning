#include <stdio.h>

int main()
{
    int input = 0;
    scanf("%d", &input);
    int sum = 0;
    while (input != 0)
    {
        int n;
        n = input % 10;
        input = input / 10;
        sum += n;
        if (input == 0)
        {
            printf("%d", n);
        }
        else
        {
            printf("%d+", n);
        }
    }
    printf("=%d", sum);
}