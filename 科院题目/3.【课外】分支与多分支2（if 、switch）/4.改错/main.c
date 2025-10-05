#include "stdio.h"
int main()
{
    int n;
    scanf("%d", &n);
    switch (n / 10)
    {
    case 10:
    case 9:
        printf("优秀\n");
        return 0;
    case 8:
    case 7:
    case 6:
        printf("合格\n");
        return 0;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("不合格\n");
        return 0;
    default:
        printf("输入成绩不合法\n");
        return 0;
    }
}