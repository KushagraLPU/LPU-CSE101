#include<stdio.h>
int main()
{
	int a=100,b=200;
		int *ptr1,*ptr2;
		ptr1=&a;
		ptr2=&b;
		
	printf("before swaping a=%d and b=%d",a,b);
	// Logic of swapping
	*ptr1=*ptr1+*ptr2;
	*ptr2=*ptr1-*ptr2;
	*ptr1=*ptr1-*ptr2;
	
printf("\nAfter swapping a=%d and b=%d",*ptr1,*ptr2);
		return 0;
    }
