#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter the limit of array:");
	scanf("%d",&a);
	int arr[a];
	printf("\nEnter the value of array:");
		for(i=0;i<a;i++)
		{
		scanf("%d",&arr[i]);
}
int min=arr[0],max=arr[0];
for(i=1;i<a;i++)
{
	if(arr[i]>max)
	max=arr[i];
	if(arr[i]<min)
	min=arr[i];
	
}
printf("\nMaximun element of array =%d",max);
printf("\nMinimun element of array =%d",min);
	return 0;
}
