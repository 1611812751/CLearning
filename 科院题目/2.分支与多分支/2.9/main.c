#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if (A != B && A != C)
    {
        printf("A");
    }
    if (B != A && B != C)
    {
        printf("B");
    }
    if (C != A && C != B)
    {
        printf("C");
    }
}
