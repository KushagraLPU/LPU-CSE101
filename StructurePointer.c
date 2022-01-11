//Pointer to structure
#include<stdio.h>
struct employee
{
	int emp_id;
	float salary;
	
};

int main()
{
	struct employee e;//structure variable
	struct employee *emp;// pointer to structure variable
	
	printf("Enter the ID & salary of employee");
	scanf("%d %f",&e.emp_id,&e.salary);
	
	emp=&e;//pointer emp having address of variable e;
	printf ("\n Details enter are:\n");
	printf("ID=%d \n Salary = %.3f",emp->emp_id,emp->salary);
	
	return 0;
	
}
