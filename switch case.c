//switch case demo
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the values");
	scanf("%d %d",&x,&y);
	switch(x>y && x+y>2)
	{
		case 0:
			printf("Hello 2021!!!");
			break;
		case 1:
			printf("Bye 2021!!");
			break;
		default:
			printf("ERROR unwanted result");			
	}
	return 0;
}
