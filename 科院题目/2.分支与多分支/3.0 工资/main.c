#include <stdio.h>

int main()
{
    int WorkYear, WorkHour;
    float ExcessHourMoney = 0, Money = 0;
    scanf("%d%d", &WorkYear, &WorkHour);

    if (WorkHour > 40 && WorkYear >= 5)
    {
        ExcessHourMoney = (WorkHour - 40) * 50 * 1.5;
        Money = ExcessHourMoney + (40 * 50);
        printf("%.2f\n", Money);
        return 0;
    }
    if (WorkHour > 40 && WorkYear < 5)
    {
        ExcessHourMoney = (WorkHour - 40) * 30 * 1.5;
        Money = ExcessHourMoney + (40 * 30);
        printf("%.2f\n", Money);
        return 0;
    }
    if (WorkHour <= 40 && WorkYear < 5)
    {

        Money = WorkHour * 30;
        printf("%.2f\n", Money);
        return 0;
    }
    if (WorkHour <= 40 && WorkYear >= 5)
    {

        Money = WorkHour * 50;
        printf("%.2f\n", Money);
        return 0;
    }
    return 0;
}