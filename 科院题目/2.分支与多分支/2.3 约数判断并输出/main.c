#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d%d", &A, &B);

    if (A % B == 0)
    {
        printf("B是A的约数\n");

        return 0;
    }
    printf("B不是A的约数\n");
    return 0;
}