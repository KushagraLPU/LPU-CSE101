//assgin range to the students on the basis of CGPA
/* cgpa >= 9,then grade=A
   cgpa >= 8,but less than 9,grade = b
   cgpa >= 7 but less than 8,grade = c
   cgpa < 7 ,then grade,grade = d */
   
   
#include<stdio.h>
int main()
{
	float cgpa;
	printf("Enter your CGPA:");
	scanf("%f",&cgpa);
	
	if(cgpa>=9.0)
	printf("Your grade = A");
	
	else if(cgpa>=8.0&&cgpa<9.0)
	printf("Your grade = B");
	
	else if(cgpa>=7.0&&cgpa<8.0)
	printf("Your grade = C");
	
	else
	printf("Your grade = D");
	
	return 0;
	
}

