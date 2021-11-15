#include<stdio.h>
int main()
{
	int arr[4],loc,val,i,j;
	printf("Enter the array element: \n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
printf("\nArray u have created: \n");
for(i=0;i<4;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nAt which location you want to add the element? ");
	scanf("%d",&loc);
	printf("\nEnter the value");
	scanf("%d",&val);
	for(i=3;i>=loc-1;i--)
	{
		arr[i+1]=arr[i];
		}
	arr[loc-1]=val;
	
	printf("the array after insertion\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\t",arr[i]);
	}
return 0;	
}
