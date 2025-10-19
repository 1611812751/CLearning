#include <stdio.h>

int main()
{
    int input = 0;
    int count = 0;
    float sum = 0;
    while (1)
    {
        scanf("%d", &input);
        if (input == -1 && count == 0)
        {
            printf("NO");
            return 0;
        }
        if (input == -1)
        {
            break;
        }
        sum += input;
        count++;
    }
    printf("%.2f", sum / count);
}