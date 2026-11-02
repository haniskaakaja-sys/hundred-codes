#include <stdio.h>  
int main() 
{     
	int a[10];     
	int i;     
	int positive = 0, negative = 0, zero = 0;           
	printf("Enter 10 integers:\n");      
	for (i = 0; i < 10; i++)     
	{         
		scanf("%d", &a[i]);     
	}        
	for (i = 0; i < 10; i++)     
	{         
		if (a[i] > 0)             
			positive++;         
		else if (a[i] < 0)             
			negative++;         
		else             
			zero++;     
	}          
	printf("\nNumber of positive elements = %d", positive);     
	printf("\nNumber of negative elements = %d", negative);     
	printf("\nNumber of zero elements = %d", zero);      
	return 0; 
} 
