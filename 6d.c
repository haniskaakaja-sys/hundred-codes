#include <stdio.h>  
int main() 
{     
	int a[5];     
	int i;         
	printf("Enter 5 integers:\n");      
	for (i = 0; i < 5; i++)     
	{         
		scanf("%d", &a[i]);     
	}        
	printf("Array elements in reverse order:\n");      
	for (i = 4; i >= 0; i--)     
	{         
		printf("%d ", a[i]);     
	}     
	return 0; 
} 
