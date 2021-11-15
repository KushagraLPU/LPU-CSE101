#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the all 3 values");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	printf("\nThe is the biggest no. %d",a);
	else if(b>c&&b>c)
	printf("\nThe is the biggest no. %d",b);
	else 
	printf("\nThe is the biggest no. %d",c);
	
	return 0;
}
