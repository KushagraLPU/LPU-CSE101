#include<stdio.h>
#include<string.h>
struct My_data
{
	char name[20];
	int age;
	char gender;
	
	struct address
	{
		int h_no;
		char lane[20];
		char city[20];
		int pin_code;
	}add;//variable of nested structure
}d1;//variable of main structure
int main()
{
	strcpy(d1.name,"KUSHAGRA");
	d1.age=19;
	d1.gender='M';
	
	d1.add.h_no=833;
	strcpy(d1.add.lane,"Wave city pinewoodsector-2");
	strcpy(d1.add.city,"Ghaziabad");
	d1.add.pin_code=201002;
	
	printf("my details are as follow\n");
	printf("Name:%s",d1.name);
	printf("\nAge:%d",d1.age);
	printf("\nGender:%c",d1.gender);
	printf("\nAddress:\n");
	printf("H.no: %d ,%s ,%s ,%d",d1.add.h_no,d1.add.lane,d1.add.city,d1.add.pin_code);
		
	return 0;
}
