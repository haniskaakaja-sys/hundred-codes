#include <stdio.h>

int isFibonacci(int n)
{
    int a = 0, b = 1, c;

    while (b < n)
    {
        c = a + b;
        a = b;
        b = c;
    }

    if (b == n || n == 0)
        return 1;
    else
        return 0;
}

void nonFibonacci(int n)
{
    int i;

    for (i = 1; i <= n; i++)
    {
        if (!isFibonacci(i))
            printf("%d ", i);
    }
}

int main()
{
    int n;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Non-Fibonacci numbers: ");
    nonFibonacci(n);

    return 0;
}
