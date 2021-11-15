#include<stdio.h>
int main()
{
	int AGE;
	printf("Enter the age of the person");
	scanf("%d",&AGE);
	if(AGE>=18)
	printf("!VOTE NOW!");
    if(AGE<18)
	printf("!NOT ELIGIBLE!");
	return 0;
}
