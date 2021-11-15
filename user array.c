#include<stdio.h>
int main()
{
	int a,b,i,j,sum=0;
		printf("Enter the limits of array:");
	    scanf("%d%d",&a,&b);
	    
	int arr[a][b];
		printf("\nEnter the value of array:");
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
			scanf("%d",&arr[i][j]);
			}
		
        }
        
			printf("\n2D array created:\n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
			printf("%d\t",arr[i][j]);
			}
			printf("\n");
        }
        
        for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
			sum = sum + arr[i][j];
			}
        }
        printf("The sum of the values of array is: %d",sum);
        
        return 0;
    }
