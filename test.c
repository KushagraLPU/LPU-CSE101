#include <stdio.h> 
int display();
static int c = 0;  
int main()
{ 
     display(); 
     display();
	 display(); 
	 display();  
} 
int display() 
{ 

printf("%d\n",c); 
c += 5; 
} 

