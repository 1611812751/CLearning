#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d/%d", &num1, &num2);
    int n;
    if (num1 > num2)
    {
        n = num2;
    }
    else
    {
        n = num1;
    }

    for (int i = n; i > 2; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("%d/%d", num1 / i, num2 / i);
            return 0;
        }
    }
    printf("%d/%d", num1, num2);
}
