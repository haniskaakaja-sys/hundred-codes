#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

float seriesSum(int n)
{
    int i;
    float sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum = sum + ((float)(i * i * i) / factorial(i));
    }

    return sum;
}

int main()
{
    int n;
    float result;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    result = seriesSum(n);

    printf("Sum of the series = %.2f", result);

    return 0;
}
