#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i;
	char *str[] = {"We will teach you how to...","Move a mountain","Level a building","Erase the past","Make a million","...all through C!"};		   
	for (i = 0; i <= 5; i++)
	printf("%s\n",str[i]);
	
	char str1[10], str2[10];
	printf("\nEnter the word you want to replace=");
	scanf("%s", str1);
	printf("Enter the word you want to put=");
	scanf("%s", str2);
	str_replace(str, str1, str2);

	for (i = 0; i <= 5; i++)
	printf("\n%s",str[i]);
	return 0;
}
void str_replace(char **str, char *old, char *new)
{
	int i, j, k, m, c;
	j = k = m = i = c = 0;
	char ans[10][100], *p;
        
        
	for (i = 0; i <=5; i++)
	{
		m = 0;
		c = 0;
        
		for (j = 0; str[i][j] != '\0';)//loop to use character by character of the whole pragraph to be stored
		{

			if (str[i][c] == old[k])
			{
				k++;
				c++;
				if (old[k] == '\0')
				{
                	for (k = 0; new[k] != '\0'; k++, m++)
					ans[i][m] = new[k];
					j = c;
					k = 0;
				}
			}
			
			else
			
			{
				ans[i][m] = str[i][j];
				m++;
				j++;
				c = j;
				k = 0;
			}
		}
		
		ans[i][m] = '\0';
		j = k = m = 0;
	}
	
	
	for (i = 0; i <= 5; i++)
	{
		p = (char*)malloc(strlen(ans[i]) + 1);
        /*Memory needed is 1 more for null character.
          str[i] = ans[i]; This doesn't works becuase left side is pointer and right side is simple
          char variable therefore a new pointer p is taken and copied the content of ans[i] and
          assign to the str[i].*/
		strcpy(p, ans[i]);
		str[i] = p;
	}
}
