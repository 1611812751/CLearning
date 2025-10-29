#include "stdio.h"
int yinshuhe(int n); // 求n的因数之和
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (yinshuhe(x) == y && yinshuhe(y) == x)
        printf("yes");
    else
        printf("no");
}

int yinshuhe(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}