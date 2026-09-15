#include<stdio.h>
int main()
{
	int i=1,j=1;
	printf("THE EVEN NUMBERS:\n");
	while(i <= 50)
	{
		if(i%2==0)
		printf("%d\n",i);
		i++;        
	}
	printf("THE ODD NUMBERS:\n");
	while(j<=50)
	{
		if(j%2!=0)
		printf("%d\n",j);		
		j++;
	}
}
