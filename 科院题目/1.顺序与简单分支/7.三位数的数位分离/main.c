#include <stdio.h>

int main()
{
    int ge, shi, bai;
    int num;

    scanf("%d", &num);
    ge = num % 10;
    shi = num % 100 / 10;
    bai = num / 100;
    printf("%d %d %d\n", ge, shi, bai);
    return 0;
}