//demo wild pointer
#include<stdio.h>
int main()
{
	int x = 78;
	float a=78.678;
	float *ptr;
		printf("Size of pointer = %d\n",sizeof(ptr));
	ptr=&a;
	*ptr=123.789;
	printf("New value of pointer = %f",*ptr);

    return 0;
}
