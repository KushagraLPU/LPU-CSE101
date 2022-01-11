//pointer as arguments to the function
#include<stdio.h>
int main()
{
	int a=80,b=90;
	printf("Before swapping,A and B are %d and %d",a,b);
	swap(&a,&b);
	printf("\n After Sapping,a=%d and b=%d",a,b);
	return();
}
void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	
}
