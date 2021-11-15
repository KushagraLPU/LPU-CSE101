#include<stdio.h>
int main()
{
	int i=0,j=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(i>1)
			break;
		}
		printf("\nHI");
	}
}
	
