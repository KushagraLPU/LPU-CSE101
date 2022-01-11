#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum=0;
	int *ptr;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr == NULL)
	{
		printf("no memory allocation");
		exit(0);
	}
	else
	{
		printf("\nNow enter %d element",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",ptr+i);
			sum=sum + *(ptr+1);
			}
		printf("\nSum of %d element = %d",n,sum);
		}
return 0;
}
