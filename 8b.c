#include <stdio.h> 
int main() 
{ 
	char str[200]; 
	int i; 
	int vowels = 0, 
	consonants = 0, 
	spaces = 0; 
	printf("Enter a sentence: "); 
	scanf("%[^\n]", str); 
	for (i = 0; str[i] != '\0'; i++) 
	{  
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
		{ 
			vowels++; 
		} 
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
		{  
			consonants++; 
		}
		else if (str[i] == ' ') 
		{ 
			spaces++; 
		}
	}
	printf("\nNumber of vowels = %d", vowels); 
	printf("\nNumber of consonants = %d", consonants); 
	printf("\nNumber of spaces = %d", spaces); 
	return 0; 
} 
