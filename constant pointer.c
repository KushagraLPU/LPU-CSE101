//Constant pointer demo
#include<stdio.h>
int main()
{
	int a = 90;
	int b=100;
	int * const ptr = &a;
	printf("The value to pointer=%d",*ptr);
	
    return 0;
}
