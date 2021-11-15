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
	
	printf("\nAt which location from which you want to decrease the element? ");
	scanf("%d",&loc);
	for(i=loc-1;i<3;i++)
	{
		arr[i]=arr[i+1];
		}
	
	printf("the array after delection\n");
	for(i=0;i<=2;i++)
	{
		printf("%d\t",arr[i]);
	}
return 0;	
}
