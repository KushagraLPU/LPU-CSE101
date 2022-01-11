#include <stdio.h>
#include<string.h>

void main()
{
 
 char  name[]={"Lovely Professional University"};             				//string char array
 int i=0;
 
 while(name[i]!='\0') //untill null character
  {           
   printf("%c", name[i]);
   i++;
  }//end while
  printf("%d %d",sizeof(name),strlen(name));

}//end main 

