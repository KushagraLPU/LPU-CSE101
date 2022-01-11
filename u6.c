//possing structure to a function by value 
#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[20];
	float cgpa;
};

void stud_data(struct student *s1);
int main()
{
	struct student s1;
	s1.roll_no=34;
	s1.cgpa=9.9;
	strcpy(s1.name,"lodu");
	
	stud_data(&s1);
	return 0;
	
}
void stud_data(struct student *s1)
{
	printf("details are\n");
	printf("Name:%s, Roll no:%d, CGPA:%.2f",s1->name,s1->roll_no,s1->cgpa);
}
