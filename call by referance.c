#include<stdio.h>
int main()
{
	int a=90;
	printf("\nNew increment no is=%d",increment(&a));
}
int increment(int *x)
{
	*x=*x+1;
	return *x;
}
