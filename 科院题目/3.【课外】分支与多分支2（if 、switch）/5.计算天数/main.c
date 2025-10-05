#include <stdio.h>

int IsLeap(int year)
{
    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int year, month = 0;
    scanf("%d%d", &year, &month);

    switch (month)
    {

    case 1:
        printf("31");
        return 0;
    case 3:
        printf("31");
        return 0;
    case 5:
        printf("31");
        return 0;
    case 7:
        printf("31");
        return 0;
    case 8:
        printf("31");
        return 0;
    case 10:
        printf("31");
        return 0;
    case 12:
        printf("31");
        return 0;
    case 4:
        printf("30");
        return 0;
    case 6:
        printf("30");
        return 0;
    case 9:
        printf("30");
        return 0;
    case 11:
        printf("30");
        return 0;
    case 2:
        if (IsLeap(year))
        {
            printf("29");
        }
        else
        {
            printf("28");
        }
        return 0;
    default:
        break;
    }
    return 0;
}