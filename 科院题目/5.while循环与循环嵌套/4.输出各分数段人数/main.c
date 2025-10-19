#include <stdio.h>

int main()
{
    int input = 0;
    int countlarge = 0;
    int countmid = 0;
    int countless = 0;
    while (1)
    {
        scanf("%d", &input);
        if (input <= 0)
        {
            break;
        }
        if (input >= 85)
        {
            countlarge++;
        }
        else if (input < 85 && input >= 60)
        {
            countmid++;
        }
        else if (input < 60)
        {
            countless++;
        }
    }

    printf(">=85:%d\n", countlarge);
    printf("60-84:%d\n", countmid);
    printf("<60:%d\n", countless);
}