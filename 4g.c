#include<stdio.h>
int main()
{
	int i,n,k=0,a;
	printf("enter a five digit number:");
	scanf("%d",&n);
	for(i =1 ;i<=5;i++)
	{
		a = n%10;
		k = (k*10)+ a;
		n = n/10;
	}
	printf("the reversed value %d",k);
	return 0;
}
