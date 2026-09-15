#include<stdio.h>
int main()
{
	int a,b=0,c=0,d=0;
	printf("enter integers upto 999: ");
	scanf("%d",a);
	
	while(a!=999){
		if(a>0){
			b++;
		}
		else if(a<0){
			c++;
		}
		else {
			d++;
		}
		scanf("%d",a);
	}
	printf("total number of positive numbers : ",b);
	printf("total number of negative numbers : ",c);
	printf("total number of zeros : ",d);
	return 0;
}
