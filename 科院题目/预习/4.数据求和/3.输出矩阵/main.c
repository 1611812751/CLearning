// 根据要求输出图形

// 输入两个整数m，n，输出有m行n列的“*”构成的图形。

// 例如输入3和4，
// 则输出：****
//               ****
//               ****

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}