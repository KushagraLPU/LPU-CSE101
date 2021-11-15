#include<stdio.h>
int main()
{

    int n,i=1;
    printf("Enter the range value");
    scanf("%d",&n);
    printf("\nEven numbers from 1 to %d are: \n",n);
    while(i%2 == 0 && i<=n)
    {
    	printf("%d ",i);
    	i++;
	}
	return 0;
}
