// #include <stdio.h>

// int main()
// {
//     int num, count = 0;
//     scanf("%d%d", &num, &count);

//     for (int k = 0; k < count; k++)
//     {
//         int result = 1;
//         for (int i = 1; i <= k + 1; i++)
//         {
//             result = result * num;
//         }
//         printf("%d\n", result);
//     }
// }

#include "stdio.h"
int getpower(int n, int k); // 表示n的k次方，k大于等于0
int main()
{
    int n, k, i;
    scanf("%d%d", &n, &k);
    for (i = 0; i < k + 1; i++)
    {
        printf("%d\n", getpower(n, i));
    }
}

int getpower(int n, int k)
{
    int result = 1;

    for (int i = 1; i <= k; i++)
    {
        result = result * n;
    }

    return result;
}