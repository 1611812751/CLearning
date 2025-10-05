#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value[50000];
    int count;
} PrimeList;

int isNotPrime(int dividend)
{
    for (int i = 2; i < dividend; i++)
    {
        if (dividend % i == 0) // 除得进就代表是质数
        {
            return 1;
        }
    }
    return 0;
}

int getTheCountOfString(char s[])
{
    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        if (s[i] == '\0')
        {
            break;
        }
        cnt++;
    }
    return cnt;
}
PrimeList getPrime(int min, int max)
{
    // int worklist[100000] = {0};
    // int count = 0;
    // int Prime = 1;

    PrimeList result = {{0}, 0};
    for (int i = min; i <= max; i++)
    {
        // printf("%d\n", i);
        if (i > 1)
        {
            // for (int j = 2; j < i; j++)
            // {
            //     if (isNotPrime(i, j))
            //     {
            //         stop = 1; // table
            //         break;
            //     }
            // }
            int stop = isNotPrime(i);
            if (stop)
            {
                continue;
            }

            result.value[result.count] = i;
            result.count++;
        }
    }

    return result;
}

int main()
{
    int min, max;

    // int reverseList[100000] = {0};

    char s[6];

    // char s1[6], s2[6];
    scanf("%d%d", &min, &max);
    // printf("%d%d", min, max);

    PrimeList theFirstPrimeList = getPrime(min, max);
    PrimeList TheTruePrime;
    for (int i = 0; i < theFirstPrimeList.count; i++)
    {
        sprintf(s, "%d", theFirstPrimeList.value[i]);
        int charCount = 0;

        for (int i = 0; i < 6; i++)
        {
            if (s[i] == '\0')
            {
                break;
            }
            charCount++;
        }
        char reverse[charCount]; // 用于反转字符串
        for (int i = charCount - 1, j = 0; i >= 0, j < charCount; i--, j++)
        {
            // printf("%d\n%d\n", i, j);
            reverse[j] = s[i];
        }
        int reversenum = atoi(reverse);

        int stop = isNotPrime(reversenum);
        if (stop)
        {
            // stop = 0;
            continue;
        }
        // printf("%d ", reversenum);
        // printf("%d\n", reversenum);
        TheTruePrime.value[TheTruePrime.count] = theFirstPrimeList.value[i];
        TheTruePrime.count++;
    }

    for (int i = 0; i < TheTruePrime.count; i++)
    {
        if (i == TheTruePrime.count - 1)
        {
            printf("%d\n", TheTruePrime.value[i]);
        }
        else
        {
            printf("%d,", TheTruePrime.value[i]);
        }
    }

    return 0;
}
