//Swapping 2 numbers
#include<stdio.h>
int main()
{
int num1, num2;
printf("Enter 2 numbers: ");
scanf("%d %d",&num1, &num2); //1,2
printf("\nOriginal values of num1 = %d and num2 = %d",num1,num2);

//A. With temp variable
/* int temp;
temp = num1;
num1 = num2;
num2 = temp; */

//B.without using temp variable
num1 = num1+num2;
num2 = num1-num2;
num1 = num1-num2;
printf("\nSwapped values of num1 = %d and num2 = %d",num1,num2);

return 0;
}
