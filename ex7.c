#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int difference(int a, int b)
{
    return a - b;
}

int product(int a, int b)
{
    return a * b;
}

float division(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int choice, a, b;
    int result;
    float div_result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- MENU ---\n");
    printf("1. Add\n");
    printf("2. Difference\n");
    printf("3. Product\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            result = add(a, b);
            printf("Sum = %d", result);
            break;

        case 2:
            result = difference(a, b);
            printf("Difference = %d", result);
            break;

        case 3:
            result = product(a, b);
            printf("Product = %d", result);
            break;

        case 4:
            if (b != 0)
            {
                div_result = division(a, b);
                printf("Division = %.2f", div_result);
            }
            else
            {
                printf("Division by zero is not possible.");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
