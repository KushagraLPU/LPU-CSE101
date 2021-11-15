#include<stdio.h>
int main()
{

    int n,i;
    printf("enter the range value");
    scanf("%d",&n);
    printf("\nOdd numbers from 1 to %d are: \n",n);
    for(i=0;i<=n;i++)
    {
    	if(i%2 != 0)
    	{
    		printf("%d",i);
		}
	}
	return 0;
}
