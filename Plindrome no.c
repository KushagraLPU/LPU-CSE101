//Palindrome number: original == reversed
#include<stdio.h>
int main()
{
int num,rev = 0, n;
printf("Enter number: ");
scanf("%d",&num);

n = num; //storing the value of original number
printf("\nOriginal number = %d",n);
while(num != 0)
{
rev = (rev*10) + (num%10);
num = num/10;
}
printf("\nReversed number = %d",rev);

if(n == rev) //original == reverse
{
printf("\n%d is Palindrome",n);
}
else
{
printf("\n%d is not Palindrome",n);
}
return 0;
}
