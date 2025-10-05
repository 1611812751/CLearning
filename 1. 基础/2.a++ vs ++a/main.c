#include <stdio.h>

int main()
{
    int a, b, c;
    a = 1;
    b = 3;
    c = a++ + b;

    printf("%d\n", c);
    return 0;
}