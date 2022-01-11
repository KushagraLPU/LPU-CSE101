#include<stdio.h>
#include<string.h>
typedef struct student
	{
		char name[20];
		float cgpa;		
	}stud;
//	typedef struct student stud;
//	stud s1,s2,s3,s4.....
int main ()
{
	stud s1;
	printf("Details of the student are:\n");
	printf("Enter the name: ");
	scanf("%s",&s1.name);
	printf("Enter the cgpa: ");
	scanf("%f",&s1.cgpa);
	printf("\nName is %s and CGPA is %.2f",s1.name,s1.cgpa);
	return 0;
	}	
