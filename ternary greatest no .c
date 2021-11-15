#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the all 3 values");
	scanf("%d %d %d",&a,&b,&c);
int greatest = c>b&&c>a ? printf("c is greatest") : a>b&&a>c ? printf("a is greatest") : printf("b is geatest");
return 0;
}
