#include <stdio.h> 
int main() 
{ 
	char str[200]; 
	int i; 
	int alphabets = 0, 
	digits = 0, 
	special = 0; 
	printf("Enter a string: "); 
	scanf("%[^\n]", str); 
	for (i = 0; str[i] != '\0'; i++) 
	{  
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
		{ 
			alphabets++; 
		} 
		else if (str[i] >= '0' && str[i] <= '9') 
		{  
			digits++; 
		}
		else 
		{ 
			special++;
		}
	} 
	printf("\nNumber of alphabets = %d", alphabets); 
	printf("\nNumber of digits = %d", digits); 
	printf("\nNumber of special characters = %d", special); 
	return 0; 
} 
