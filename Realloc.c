#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,n2,i;
	int *ptr;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("\nAddresses of %d elements",n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",ptr+1);
	}
	printf("\n How many elements now? ");
    scanf("%d",n2);
    ptr=realloc(ptr,n2*sizeof(int));
    printf("\nNew address of %d element :\n",n2);
    for(i=0;i<n2;i++)
    {
    	printf("%d\n",ptr+1);
    	
	}

return 0;
}
