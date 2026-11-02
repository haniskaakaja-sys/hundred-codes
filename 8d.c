#include <stdio.h> 
int main() 
{ 
	char str1[100], str2[100]; 
	int i, j; 
	printf("enter the first string: "); 
	scanf("%[^\n]", str1); 
	getchar(); 
	printf("enter the second string: "); 
	scanf("%[^\n]", str2);  
	i = 0; 
	while (str1[i] != '\0') 
	{  
		i++;
	}  
	j = 0; 
	while (str2[j] != '\0') 
	{  
		str1[i] = str2[j]; 
		i++; 
		j++; 
	}
	str1[i] = '\0'; 
	printf("\nConcatenated string: %s", str1); 
	return 0; 
} 
