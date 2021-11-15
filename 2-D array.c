//2-d array
#include<stdio.h>
int main()
{  
	int arr[3][2]={{1,2},{10,20},{100,200}};
		printf("2-D array: \n");
	int i,j;
		for(i=0;i<3;i++)
		{
		for (j=0;j<2;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
        }
        return 0;
    }
