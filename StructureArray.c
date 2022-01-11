//Array of Structure 
#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int roll_no;

};
int main()
{
	int i;
	struct student record[10];
	//student 1 data
	record[0].roll_no=21;
	strcpy(record[0].name,"Ram");
	
	//Student 2 data
	record[1].roll_no=04;
	strcpy(record[1].name,"Kushagra");
	
	//Student 3 data
	record[2].roll_no=05;
	strcpy(record[2].name,"SAI");
	
	for(i=0;i<3;i++)
	{
		printf("Record of student %d\n",i+1);
		printf("Roll No.:%d \n Name:%s\n",record[i].roll_no,record[i].name);
		
	}
	return 0;
}
