#include <stdio.h>

int isFull(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        int full = n % i;
        if (full == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int sum = 0;
    int havaFullNum = 1;
    for (int i = 2; i <= n; i++)
    {
        if (isFull(i))
        {
            printf("%d ", i);
            havaFullNum = 0;
        }
    }
    if (havaFullNum)
    {
        printf("NO");
    }
}