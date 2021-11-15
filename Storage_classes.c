// Storage Classes Demo
#include<stdio.h>
int ext;
int main()
{
	int a;
	auto char ch;
	float f;//auto
	printf("\n___________AUTOMATIC STORAGE CLASS_________\n");
	printf("\na=%d and Ch=%c\n",a,ch,f);
	
	printf("\n___________STATIC STORAGE CLASS_________\n");
	static int x=100;
	static int y;
	printf("\nX=%d and Y=%d\n",x,y);
	
	printf("\n___________REGISTER STORAGE CLASS_________\n");
	register int r;
	printf("\nR=%d\n",r);
	//printf("\nAddress of r = %d",r);//compile time error
	
	printf("\n___________EXTERNAL(GLOBAL) STORAGE CLASS_________\n");
	printf("\next=%d\n",ext);
	
	}
