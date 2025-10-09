#include <stdio.h>

int main()
{
    int n;
    float sum;
    float avg;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        float input = 0;
        scanf("%f", &input);
        sum += input;
    }
    avg = sum / n;
    printf("%.2f\n", avg);
}