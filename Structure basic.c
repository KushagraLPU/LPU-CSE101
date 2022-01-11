//STRUCTURE DEMO
#include<stdio.h>
#include<string.h>
struct my_data
	{
		char name[25];
		int reg_no;
		float cgpa;
		long long int Ph_no;
		char city[15];
		char Gender[6];
		char Expected_package[6];			
	}s1;
int main()
{
s1.reg_no=12101583;
strcpy(s1.name,"Kushagra Srivastava ");
s1.cgpa=9.9;
s1.Ph_no=9910262776;
strcpy(s1.city,"GHAZIABAD");
strcpy(s1.Gender,"MALE");
strcpy(s1.Expected_package,"30-36 p.a.");
printf("My name is %s",s1.name);
printf("and My Registration no. is %d\n",s1.reg_no);
printf("My cgpa is %.1f\n",s1.cgpa);
printf("My Phone no is %lld\n",s1.Ph_no);
printf("My Gender is %s\n",s1.Gender);
printf("I live in %s\n",s1.city);
printf("I am expecting a package of %s\n",s1.Expected_package);
}
