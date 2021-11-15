//pass the individual array elements to function
#include<stdio.h>
int main()
{
	int a,i;
		printf("Enter the limit of array:");
	    scanf("%d",&a);
	    
	int cgpa[a];
		printf("\nEnter the value of CGPA for the array:");
		for(i=0;i<a;i++)
		{
		scanf("%d",&cgpa[i]);
        }
    printf("CGPA of 2nd and 4th student :");
	show(cgpa[1], cgpa[3]);
	return 0;
}

void show (int cgpa2,int cgpa4)
{
	printf("%d\n",cgpa2);
	printf("%d",cgpa4);
}
