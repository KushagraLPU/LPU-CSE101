#include<stdio.h>
int main()
{
	int a[] = {3, 7, -1, 4, 6};
	int i, sum = 0;     //compute mean of values in array a
	for(i=0; i<5; i++)
	{
		sum += *(a + i);
	}
float mean = sum/(float)5;
printf("%d",sum);
printf("Mean = %.2f\n", mean);
return 0;
}

