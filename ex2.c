#include <stdio.h>

int largest(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a, b, c, second;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (largest(a, b) == a)
        second = largest(b, c);
    else
        second = largest(a, c);

    printf("Second largest = %d", second);

    return 0;
}
