//gets() && puts() demo
#include<stdio.h>
#include<conio.h>
int main()
{
	char name[10];
	int i;
	printf("Enter your name: ");
	gets(name);
	for(i=0;i<=9;i++)
	printf("\nThe ASCII value is %d",name[i]);
	printf("\nYour name is :");
	puts(name);
	
	return 0;
}
