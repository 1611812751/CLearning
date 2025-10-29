#include <stdio.h>

int CountDigit(int number, int digit);

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}
int CountDigit(int number, int digit)
{
    int count = 0;
    while (number != 0)
    {
        int num = number % 10;
        if (num == digit)
        {
            count++;
        }
        number = number / 10;
    }
    return count;
}
