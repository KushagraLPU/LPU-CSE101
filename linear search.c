#include<stdio.h>
int main()
{int size,item;
printf("enter the array size: ");
scanf("%d",&size);
	int arr[size],loc,val,i,j;
printf("\nEnter the array element :");
for(i=0;i<size;i++)
{scanf("%d",&arr[i]);
}printf("Enter the value you want to search:");
scanf("%d",&item);
for(i=0;i<size;9
7i++)
{
	if(arr[i]==item)
	{
		printf("%d is present int the array at location=%d",item,(i+1));
		break;
	}
}
	if(i==size)
	printf("item not found");
	
return 0;	
}
