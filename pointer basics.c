#include<stdio.h>
int main()
{
	int a=100;
		int *ptr=&a;
	printf("The value of a=%d\n",a);
	printf("The address of a=%d\n",&a);
	printf("The value of a=%d\n",*ptr);
	printf("The address of a=%d\n",ptr);
	printf("The address of a in hexa decimal is = %x\n",ptr);
	return 0;
    }
