#include <stdio.h>
int main() 
{
    int a, i, sum = 0;
	printf("Enter a number: ");
    scanf("%d", &a);
    for (i = 1; i <= a/2; i++) 
		{
        if (a % i == 0) {
            sum += i;
        }
    }
    if (sum == a)
        printf("%d is a Perfect Number.", a);
    else
        printf("%d is Not a Perfect Number.", a);

    return 0;
}
