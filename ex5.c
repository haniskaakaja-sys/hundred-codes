#include <stdio.h>

int largest(int a, int b, int c)
{
    int large;

    large = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    return large;
}

int main()
{
    int a, b, c, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = largest(a, b, c);

    printf("Largest = %d", result);

    return 0;
}
