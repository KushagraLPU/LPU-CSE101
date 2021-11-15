//pasing the whole array to a function 
#include<stdio.h>
int main()
{
	int min=0;
	int a,i;
		printf("Enter the limit of array:");
	    scanf("%d",&a);
	    
	int arr[a];
		printf("\nEnter the value of array:");
		for(i=0;i<a;i++)
		{
		scanf("%d",&arr[i]);
        }
        min=minimum(arr,a);
        printf("minimum array element = %d",min);
}
    
        int minimum(int arr[],int size)
    	{
    		int min=arr[0];
    		int i;
    		for (i=1;i<size;i++)
    	{
    		if(min>arr[i])
    		min=arr[i];
		}
			return min;
		}
