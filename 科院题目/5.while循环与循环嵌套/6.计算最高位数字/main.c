#include <stdio.h>

int main()
{
    int input = 0;
    // int max = 0;
    scanf("%d", &input);
    while (input != 0)
    {
        int n;
        n = input % 10;
        input = input / 10;
        if (input == 0)
        {
            printf("%d", n);
        }
    }
}
