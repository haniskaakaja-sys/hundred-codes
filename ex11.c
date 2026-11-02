#include <stdio.h>

void printDigit(int digit)
{
    switch (digit)
    {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
    }
}

void printDigitsInWords(int n)
{
    int divisor = 1, digit;

    /* Find the highest place value */
    while (n / divisor >= 10)
    {
        divisor = divisor * 10;
    }

    /* Print digits from left to right */
    while (divisor > 0)
    {
        digit = n / divisor;
        printDigit(digit);

        n = n % divisor;
        divisor = divisor / 10;
    }
}

int main()
{
    int n;

    do
    {
        printf("Enter an integer between 100 and 9999: ");
        scanf("%d", &n);

        if (n < 100 || n > 9999)
            printf("Invalid Input\n");

    } while (n < 100 || n > 9999);

    printDigitsInWords(n);

    return 0;
}
