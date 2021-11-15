//VOID POINTER DEMO
#include<stdio.h>
int main()
{
	int x = 78;
	float y=78.678;
	void *ptr;
	ptr=&x;
	printf("Int value using void pointer = %d",*(int*)ptr);
	ptr=&y;
    printf("\nFloat value using void pointer = %f",*(float*)ptr);
    return 0;
}
