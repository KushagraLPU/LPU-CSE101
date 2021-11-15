#include<stdio.h>
int main()
{
int num, i, fact = 1;
printf("Whose factorial you want to calculate? ");
scanf("%d",&num);

for(i=num; i>=1; i--) //for(i=1; i<=num; i++)
{
fact = fact * i;
}
printf("\nFactorial of %d = %d",num, fact);
return 0;
}
