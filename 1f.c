#include<stdio.h>
int main()
{
	int b,h,area;
	printf(" let base = b \n    height = h\n");
	printf("enter the value of base and height respectively = ");
	scanf("%d,%d",&b,&h);
	area = (b*h)/2;
	printf("the area of the triangle is %d",area);
	return 0;
}
