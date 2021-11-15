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
        
int even=0,odd=0;

for(i=0;i<a;i++)
{
	if(arr[i]%2==0)
	{ 
	printf("\nThe value of the array which you have given for Array[%d] = %d is even",i,arr[i]);
	even++;
	}
	else
	{ 
	printf("\nThe value of the array which you have given for Array[%d] = %d is odd",i,arr[i]);
	odd++;
	}
	
}
printf("\nThe total no of even elements = %d",even);
printf("\nThe total no of odd elements = %d",odd);
	return 0;
}
