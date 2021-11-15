//Print all odd numbers from 1 to n and find their sum
#include<stdio.h>
int main()
{
int n, i, sum=0;
printf("n= ");
scanf("%d",&n);

printf("\nOdd numbers from 1 to %d are:\n",n);
for(i=1; i<=n; i++)
{
if(i%2 != 0)
{
printf("%d ",i);
sum = sum+i;
}
}
printf("\nSum of odd numbers = %d",sum);
return 0;
}
