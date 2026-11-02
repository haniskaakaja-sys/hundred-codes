#include <stdio.h>

int largestDigit(int n)
{
    int digit, largest = 0;

    while (n > 0)
    {
        digit = n % 10;

        if (digit > largest)
            largest = digit;

        n = n / 10;
    }

    return largest;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = largestDigit(num);

    printf("Largest digit = %d", result);

    return 0;
}
