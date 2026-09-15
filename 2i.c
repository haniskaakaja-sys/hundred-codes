#include <stdio.h>
int main() 
{
    int a,b,c,d,e;
    int total_paise;
    float total_rupees;
    printf("Enter number of 50 paise coins: ");
    scanf("%d", &a);
    printf("Enter number of 25 paise coins: ");
    scanf("%d", &b);
    printf("Enter number of 20 paise coins: ");
    scanf("%d", &c);
    printf("Enter number of 10 paise coins: ");
    scanf("%d", &d);
    printf("Enter number of 5 paise coins: ");
    scanf("%d", &e);
    total_paise = (a * 50) + (b * 25) + (c * 20) + (d * 10) + (e * 5);
    total_rupees = total_paise / 100.0;
    printf("Total Money in paise: %d paise\n", total_paise);
    printf("Total money in rupees: %f Rs.", total_rupees);
    return 0;
}
