#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int count = 1;

    for (int i = 1; i <= n; i += 2)
    {
        int tmp = 0;
        if (count % 2 == 0)
        {
            tmp = -i;
        }
        else
        {
            tmp = i;
        }

        sum += tmp;
        count++;
    }
    printf("%d", sum);
}