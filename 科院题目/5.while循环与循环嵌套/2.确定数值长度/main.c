#include <stdio.h>

int main()
{
    int input = -1;
    scanf("%d", &input);
    int count = 0;
    while (input != 0)
    {
        input = input / 10;
        count++;
    }
    printf("%d", count);
}