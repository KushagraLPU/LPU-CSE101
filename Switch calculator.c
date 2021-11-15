#include<stdio.h>
int main()
{
	int a,b,x,Add,Sub,Mul,Div,Mod;
	printf("Enter the two values among which calculation has to be done");
	scanf("%d %d",&a,&b);
	printf("\nYour entered numbers are \na=%d \nb=%d",a,b);
	printf("\nEnter the value of excecution to be performed");
	printf("\n1=Addition");
	printf("\n2=Substraction");
	printf("\n3=Multification");
	printf("\n4=Division");
	printf("\n5=Modulas\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			Add=a+b;
			printf("The sum is=%d",Add);
			break;
		case 2:
			Sub=a-b;
			printf("The difference is=%d",Sub);
			break;		
		case 3:
			Mul=a*b;
		    printf("The product is=%d",Mul);
			break;
        case 4:
        	Div=a/b;
		    printf("The divident is=%d",Div);
			break;
		case 5:
		    Mod=a%b;
			printf("The reminder is=%d",Mod);
			break;
		default:
		 	printf("ERROR");
		}
		return 0;
	}
