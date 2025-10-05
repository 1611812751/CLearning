#include <stdio.h>

int main()
{
    int charge = 0;
    int km;
    int time, timecharge = 0;
    scanf("%d%d", &km, &time);

    charge += 10;

    if (km - 3 > 0)
    {
        if (km > 10)
        {
            int moreCharge = km - 10;
            charge += moreCharge * 3;
            charge += 14;
        }
        else if (km <= 10 && km > 3)
        {
            int lessCharge = km - 3;
            charge += lessCharge * 2;
        }
    }
    timecharge = (time / 5) * 2;

    charge += timecharge;
    printf("%d\n", charge);
}