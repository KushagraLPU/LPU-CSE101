//Fibonacci Series With Recurssion
#include<stdio.h>
int main()
{
	int Limit;
	printf("Enter the limit for printing the series:");
	scanf("%d",&Limit);
	
	printf("\nFibonacci series:\n");
	printf("%d %d",0,1);
	fibonacci(Limit-2);
	return 0;
}

void fibonacci(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
  {
	n3=n1+n2;
	printf(" %d",n3);
	n1=n2;
	n2=n3;
	fibonacci(n-1);
	
}

}
