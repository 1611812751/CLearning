#include <stdio.h>

int main()
{
    int sum = 0;
    while (1)
    {
        int tmp;
        scanf("%d", &tmp);
        if (tmp == -1)
        {
            printf("%d", sum);
            break;
        }

        sum += tmp;
    }

    return 0;
}
