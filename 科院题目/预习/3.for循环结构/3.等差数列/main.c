#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    /*
       Sum 用于记录每项的数值
       TotalSum 则是所有项的汇总
    */
    int sum = 0;
    int totalSum = 0;
    if (n > 0)
    {
        sum = 2;
        totalSum += sum;
    }
    else
    {
        return 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        sum += 3;
        totalSum += sum;
    }
    printf("%d\n", totalSum);
    return 0;
}