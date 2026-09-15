#include<stdio.h>
int main()
{
   int a,b,c,d,sum;
   printf("enter a three digit number to add the dights of the number = ");
   scanf("%d",&a);
   b = a%10;
   c = (a/10)%10;
   d = a/100;
   sum = b + c + d;
   printf("the sum of digits is %d",sum);
   return 0;
}
