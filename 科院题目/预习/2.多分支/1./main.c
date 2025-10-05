#include <stdio.h>

int main()
{
    int count = 0;
    char str[3];
    scanf("%s", str);
    char temp;

    for (int i = 0; i < 3; i++)
    {
        if (str[i] != '\0')
        {
            count++;
        }
    }
    if (count == 1 || count == 2 && str[0] == '-')
    {
        printf("%s\n", str);
        return 0;
    }
    if (str[0] == '-')
    {
        temp = str[1];
        str[1] = str[2];
        str[2] = temp;
    }
    else
    {
        temp = str[0];
        str[0] = str[1];
        str[1] = temp;
    }
    printf("%s\n", str);
}