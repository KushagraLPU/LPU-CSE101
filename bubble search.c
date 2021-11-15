#include<stdio.h>
int main()
{
	int size,i,j,temp;
	printf("Enter the array size:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array element: \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
printf("\nArray u have created: \n");
for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	//logic of bubble
	for(i=0;i<size-1;i++)
	{
	for(j=0;j<size-1;i++)
		{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
				}
	}
	printf("\nArray after sorting:");
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
