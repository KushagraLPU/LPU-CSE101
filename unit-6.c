//possing structure to a function by value 
#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[20];
	float cgpa;
};

void stud_data(struct student detail);
int main()
{
	struct student detail;
	detail.roll_no=34;
	detail.cgpa=9.9;
	strcpy(detail.name,"lodu");
	
	stud_data(detail);
	return 0;
	
}
void stud_data(struct student detail)
{
	printf("details are\n");
	printf("Name:%s, Roll no:%d, CGPA:%.2f",detail.name,detail.roll_no,detail.cgpa);
}
