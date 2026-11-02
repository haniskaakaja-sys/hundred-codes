#include <stdio.h>  
int main() 
{     
	int a[10];     
	int i;           
	printf("Enter 10 integers:\n");      
	for (i = 0; i < 10; i++)     
	{         
		scanf("%d", &a[i]);     
	}          
	printf("\nThe elements in the array are:\n");      
	for (i = 0; i < 10; i++)     
	{         
		printf("%d ", a[i]);    
	}      
	return 0; 
}  
