//Dangling pointer demo
#include<stdio.h>
int main()
{
	int a = 80;
	int *ptr = &a;
	printf("Address of a = %d",ptr);
	free(ptr); //de-allocate the memory
	printf("\nThe Address of a after de-allocation=%d",ptr);
	//*ptr = NULL;
		    return 0;
}
