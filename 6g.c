#include <stdio.h>  
int main() 
{     
	int a[100];     
	int n, i, j;     
	int found = 0;      
	printf("Enter the number of elements: ");    
	scanf("%d", &n);      
	printf("Enter %d integers:\n", n);      
	for (i = 0; i < n; i++)     
	{         
		scanf("%d", &a[i]);     
	}       
	for (i = 0; i < n; i++)     
	{         
		for (j = i + 1; j < n; j++)         
		{             
			if (a[i] == a[j])             
			{                 
				printf("Duplicate number %d found at positions %d and %d\n",                        
				a[i], i + 1, j + 1);                 
				found = 1;             
			}         
		}    
	} 
	if (found == 0) 
	{ 
		printf("No duplicate numbers found.");
	} 
	return 0; 
}  
