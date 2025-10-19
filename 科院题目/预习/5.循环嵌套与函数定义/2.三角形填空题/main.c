#include <stdio.h>
// 定义star函数
void star(int n)
{
    int i;
    for (i = 1; i <= n; i++)
        printf("*");
}
// 声明star函数的原型
int main()
{
    int row, i;
    /*用户输入行数(送给变量row)*/
    scanf("%d", &row);
    /*控制row行输出*/
    for (i = 1; i <= row; i++)
    { // 调用star函数，打印i个星星
        star(i);
        // 回车换行
        printf("\n");
    }
    return 0;
}
