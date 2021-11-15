#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter 1st no. ");
	scanf("%d",&num1);
	printf("Enter 2nd no. ");
	scanf("%d",&num2);
	
	printf("\nSum of numbers = %d",addition(num1,num2));
	
}
int addition(int x , int y)
{
	int add=x+y;
	return add;
}
