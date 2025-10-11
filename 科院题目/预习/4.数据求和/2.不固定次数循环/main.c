// 从键盘输入n（n>0）个正整数，找到其中的最大值 提示： 假设最大值为-1 以后输入一个与最大值比较，如果比最大值大，则更新最大值为该输入数据 所有数据输入结束 就可以输出最大值
#include <stdio.h>
int main()
{
    int n, max;
    max = 0;
    while (1)
    {
        int tmp;
        scanf("%d", &tmp);
        if (tmp == -1)
        {
            break;
        }
        // printf("%d", tmp);
        if (max < tmp)
        {
            max = tmp;
        }
    }
    printf("%d", max);
    return 0;
}