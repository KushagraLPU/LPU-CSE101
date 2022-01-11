#include<stdio.h>
#include<string.h>
struct kushagra
{
	char str[100];
	char str1[100];
}k1;

 int main() 
{ 
int i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    
	scanf("\n%s",k1.str1);
    strcpy(k1.str,k1.str1);
    printf("%d\n", Find_Strlength(k1.str));//Length of the substring is defined by this statement
    	
}

    return 0; 

}

int Find_Strlength(char *str)
{
    int n=strlen(str);
    int i,j,k,maxlen=0;  
 
 
    for (i=0;i<n;i++)
    {
        for (j=i+1; j<n; j+=2)
        {
            int length=j-i+1;//Find length of current substr
 
            int leftsum=0,rightsum=0;
            for (k =0;k<length/2;k++)
            {
                leftsum+=(str[i+k]-'0');
                rightsum+=(str[i+k+length/2]-'0');
            }
 
           
		            if (leftsum == rightsum && maxlen < length)
                    maxlen = length;
        }
    }
    return maxlen;
}
 

