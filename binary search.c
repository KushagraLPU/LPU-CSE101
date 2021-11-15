#include<stdio.h>
int main()
{
	int size,i,low,high,mid,item;
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
	
	printf("\nEnter the value to be searched: ");
	scanf("%d",&item);
	low=0;
	high=size-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(arr[mid]<item)
		{
			low=mid+1;
		}
		else if(arr[mid]==item)
		{
		printf("%d found at locatiom %d",item,(mid+1));
		break;
		}
		else
		{
			high=mid-1;
		}
		mid=(low+high)/2;
	}
    if(low > high)
	printf("The value isn't found!!");
	return 0;
}
