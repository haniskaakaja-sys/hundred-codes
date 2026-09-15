#include<stdio.h>
int main()
{
	int a,b,sum,difference,product,quotient;
	printf("the two values that you enter are added,subracted,multiplied and divided\n");
	printf("enter two values = ");
	scanf("%d,%d",&a,&b);
	sum = a+ b;
	difference = a - b;
	product = a*b;
	quotient = a/b;
	printf("sum = %d\n",sum);
	printf("difference = %d\n",difference);
	printf("product = %d\n",product);
	printf("quotient = %d",quotient);
	return 0;	
}
