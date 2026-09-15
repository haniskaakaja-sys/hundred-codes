#include<stdio.h>
int main()
{
	int l,b,h,volume;
	printf("let length = l \n    width = b \n    depth = h \n    the volume of the cuboid = l*b*h\n");
	printf(" enter the values of l,b,h respectively = ");
    scanf("%d,%d,%d",&l,&b,&h);
    volume = l*b*h;
    printf("the total volume of cuboid is %d ",volume);
	
}
