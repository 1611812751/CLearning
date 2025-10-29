#include <stdio.h>
#include <string.h>
// 声明一个能转换英文字符大小写的函数。
// 如果传入其它字符,例如空格，该函数返回原字符。
char reverse(char ch);

int main()
{
    char ch;
    int i = 0;
    // 读取一行字符串
    ch = getchar();
    while (ch != '#') // 如果还有字符
    {                 // 那么就将该字符传给reverse函数去处理，并重新放回ch中
        printf("%c", reverse(ch));
        ch = getchar(); // 输出转换后的ch，并输入下一个待转换字符
    }
}
char reverse(char ch)
{
    char result;
    result = ch;

    if (ch >= 'a' && ch <= 'z')
    {
        result -= 32;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        result += 32;
    }
    return result;
}