#include <stdio.h>
// 声明一个能打印n个字符的函数printchar
void printchar(int n, char ch);

int main()
{
    int row, i;
    /*用户输入行数(送给变量row)*/
    scanf("%d", &row);
    // 控制row行输出
    for (i = 1; i <= row; i++)
    {
        int spaceNums = row - i;
        printchar(row - i, ' ');
        printchar(i * 2 - 1, '*');

        // 回车换行
        printf("\n");
    }
    printf("\n");
}
void printchar(int n, char ch)
{

    for (int i = 0; i < n; i++)
    {
        printf("%c", ch);
    }
}