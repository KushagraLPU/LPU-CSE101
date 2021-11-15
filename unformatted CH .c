//getche(),getch() && putch() demo
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("press any key to exit........ ");
	ch=getch();
	
	printf("\n You have entered the below key :\n");	
    putch(ch);
    
    char z;
    printf("\nPress any key....");
    z=getche();
    
    printf("\n You have entered : ");
    putch(z);
	return 0;
}
