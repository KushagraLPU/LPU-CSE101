#include<stdio.h>
int main()
{
	int n,i,a=1;
	scanf("%d\n",&n);
	int arr[n];
	int arr1[n];
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		arr1[i]=arr[n-a];
		a=a+1;
	}

 
	for(i=0;i<n;i++)
	{
	printf("%d ",arr1[i]);
}
	return 0;
}
