#include<stdio.h>
int main()
{
	int a;
	printf("Enter the side of square ");
	scanf("%d",&a);

	printf("\nArea of Square is = %d",Area(a));
	
}
int Area(int x)
{
	int A=x*x;
	return A;
}
