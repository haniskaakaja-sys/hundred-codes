#include <stdio.h>

int sum(int n)
{
    int i, total = 0;

    for (i = 1; i <= n; i++)
    {
        total = total + i;
    }

    return total;
}

int main()
{
    int n, result;

    printf("Enter the limit: ");
    scanf("%d", &n);

    result = sum(n);

    printf("Sum = %d", result);

    return 0;
}
