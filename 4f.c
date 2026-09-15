#include<stdio.h>
int main()
{
	int i= 0,j = 1,k;
	do
	{
	
		printf("the order is %d\n",j);
		k = j + i;
		i = j;
		j = k;	
	}while(j<=150);
	return 0;
	
}
