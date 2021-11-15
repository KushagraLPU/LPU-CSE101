#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the no two no:");
    scanf("%d",&a);
    scanf("%d",&b);
	int D=a/b;
	int R=a%b;
	printf("\nThe division of the two no is: %d ",D);
	printf("\nThe reminder of those two no is: %d",R);
	return 0;
}
