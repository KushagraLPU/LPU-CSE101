#include<stdio.h>
#include<string.h>
struct emp_data
	{
		char emp_name[30];
		int emp_id;
		float salary;
		char desig[15];
		char Gender[6];	
	}e1,e2;
int main()
{
e1.emp_id=10011;
strcpy(e1.emp_name,"sameer");
e1.salary=55000.550;
strcpy(e1.desig,"software eng.");

e2.emp_id=12211;
strcpy(e2.emp_name,"fuddi");
e2.salary=75000.550;
strcpy(e2.desig,"software eng.");
printf("Details of first employee:\n");
printf("Name=%s\nEmploy id=%d\nDesignation=%s\nSalary=%.2f\n",
e1.emp_name,e1.emp_id,e1.desig,e1.salary);
printf("\nDetails of second employee:\n");
printf("Name=%s\nEmploy id=%d\nDesignation=%s\nSalary=%f",
e2.emp_name,e2.emp_id,e2.desig,e2.salary);
}
