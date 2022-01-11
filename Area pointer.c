
#include<stdio.h>
int main()
{
	int l,w;
	printf("enter the lenght and width of rectangle");
	scanf("%d",&l);
	scanf("%d",&w);
	printf("Length and width are %d and %d",l,w);
	int Area=area(&l,&w);
	printf("\n Area of rectangle=%d",Area);
	return 0;
}
int area(int *x,int *y)
{
	int z;
	z=*x * *y;
	return z;
		
}
