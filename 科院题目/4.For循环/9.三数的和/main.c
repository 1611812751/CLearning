#include <stdio.h>

// 求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和

int main()
{
    float totalSum = 0.00;

    int a, b, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    for (int i = 1; i <= a; i++)
    {
        totalSum += i;
    }

    for (int i = 1; i <= b; i++)
    {
        totalSum += i * i;
    }

    for (int i = 1; i <= c; i++)
    {
        float tmp;
        tmp = 1.00 / i;
        totalSum += tmp;
    }

    printf("%.2f", totalSum);
}