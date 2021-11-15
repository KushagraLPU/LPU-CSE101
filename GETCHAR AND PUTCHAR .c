//getchar() && putchar() demo
#include<stdio.h>
#include<conio.h>
int main()
{
	char x;
	printf("enter your gender: ");
	//scanf("%c",x)
	x=getchar();
	printf("\nYour gender is : %c\n",x);
	putchar(x);
	return 0;
}
