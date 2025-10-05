#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", num * num * num + num * num + num + 1);
    return 0;
}