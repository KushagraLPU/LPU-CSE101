#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	int *ptr;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("no memory allocation");
		exit(0);
	}
	else
	{
		printf("memory allocation done");
		printf("\nNow enter the element",n);
		for(i=0;i<n;i++)
		{
			ptr[i]=i+1;
			
		}
		printf("\nElements are:");
			for(i=0;i<n;i++)
		{
		printf("%d",ptr[i]);
	}
}
return 0;
}
