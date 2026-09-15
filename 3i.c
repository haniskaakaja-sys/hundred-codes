#include <stdio.h> 
int main() 
{ 
	int a, b, c; 
	printf("Enter three numbers: "); 
	scanf("%d %d %d", &a, &b, &c); 
	if (a > b) 
		{ 
		if (a > c) 
			printf("%d is Largest", a); 
		else 
			printf("%d is Largest", c); 
		} 
	else 
		{ 
		if (b > c) 
			printf("%d is Largest", b); 
		else 
			printf("%d is Largest", c); 
		} 
	return 0;
}
