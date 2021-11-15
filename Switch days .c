#include<stdio.h>
int main()
{
	char x;
	printf("Enter any no from 1 to 7");
	scanf("%c",&x);
	switch(x)
	{
		case 1:
			printf("MONDAY");
			break;
		case 2:
			printf("TUESDAY");
			break;		
		case 3:
		    printf("WDNESDAY");
			break;
        case 4:
		    printf("THURSDAY");
			break;
		case 5:
			printf("FRIDAY");
			break;
		case 6:
			printf("SATURDAY");
			break;
		case 7:
			printf("SUNDAY");
			break;
		default:
		 	printf("ERROR");
		}
		return 0;
	}
