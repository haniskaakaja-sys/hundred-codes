#include <stdio.h>
#include <math.h>
int main() 
{
    double a,b,c,d;
    double distance;
    printf("Enter coordinates for the first point (a,b): ");
    scanf("%lf,%lf", &a, &b);
    printf("Enter coordinates for the second point (c,d): ");
    scanf("%lf,%lf", &c, &d);
    distance = sqrt(pow(c - a, 2) + pow(d - b, 2));
    printf("The length of the straight line is: %lf\n", distance);
    return 0;
}
