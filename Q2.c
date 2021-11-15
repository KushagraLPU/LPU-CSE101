#include<stdio.h>
int main()
{
	int size,i,average,lowest,higgest=0,count=0,sum=0;
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
	for(i=0;i<size;i++)
	{sum=sum+arr[i];
	if(arr[i] > higgest)
	higgest=arr[i];
	}
	lowest=higgest;
	for(i=0;i<size;i++)
	{
	if(arr[i]<lowest)
	lowest=arr[i];
	}
for(i=0;i<size;i++)
	{
	if(arr[i]<30)
	count++;
	}
	printf("\nThe average marks is %d\n ",sum/size);
	printf("The higgest marks is %d\n",higgest);
printf("The lowest marks is %d \n",lowest);
printf("The student have marks below 30 are %d \n",count);
return 0;	
}
