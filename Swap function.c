#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter 1st no. ");
	scanf("%d",&num1);
	printf("Enter 2nd no. ");
	scanf("%d",&num2);
	
	swap(num1,num2);
	
	
}
int swap(int x , int y)
{
	int c=y;
	y=x;
	x=c;
	return x,y;
	
}
