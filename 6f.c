#include <stdio.h>  
int main() 
{     
	int a[10];     
	int i, largest, smallest;     
	int largeIndex, smallIndex, temp;        
	printf("Enter 10 integers:\n");      
	for (i = 0; i < 10; i++)     
	{         
		scanf("%d", &a[i]);     
	}         
	largest = a[0];     
	smallest = a[0];     
	largeIndex = 0;     
	smallIndex = 0;           
	for (i = 1; i < 10; i++)     
	{         
		if (a[i] > largest)         
		{             
			largest = a[i];             
			largeIndex = i;         
		}          
		if (a[i] < smallest)         
		{             
			smallest = a[i];             
			smallIndex = i;         
		}     
	}         
	temp = a[largeIndex];     
	a[largeIndex] = a[smallIndex];     
	a[smallIndex] = temp;         
	printf("\nArray after interchanging largest and smallest:\n");      
	for (i = 0; i < 10; i++)     
	{         
		printf("%d ", a[i]);     
	}      
	return 0; 
} 
