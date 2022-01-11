#include<stdio.h>
#include<string.h>
struct kushagra
{
	char str[100];
	char str1[100];
}k1;

 int main() 
{ int i,n;
    printf("enter total ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("enter");
    		scanf("%s",k1.str1);
    	strcpy(k1.str,k1.str1);
    	printf("Length of the substring is %d", findLength(str)); 
    	
	}

    return 0; 

}
