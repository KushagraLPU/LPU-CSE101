//squre of number using VOID function 
#include<stdio.h>
void square(int a);
int main()
{
int num;
printf("Enter the number:-");
scanf("%d",&num);
square(num);
}
void square(int a)
(
int sq = a * a;
printf("\nThe square of %d = %d", a,sq);
)
