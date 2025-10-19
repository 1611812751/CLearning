#include "stdio.h"
// 函数原型定义
int is_oushu(int n);
int main()
{
    int n;
    int r;
    scanf("%d", &n);
    if (is_oushu(n)) // 函数调用
        printf("even\n");
    else
        printf("odd\n");
    return 0;
}

int is_oushu(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    return 0;
}
