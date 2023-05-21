#include<stdio.h>
#include<string.h>

struct employee
{
	int code;
	float salary;
	char name[10];
};


int main()
{
	struct employee e1,e2,e3;


	printf("Enter the code of employee e1 \n");
	scanf("%d",&e1.code);
	printf("Enter the salary of employee e1 \n");
	scanf("%d",&e1.salary);
	printf("Enter the name of employee e1 \n");
	scanf("%s",e1.name);

	printf("Enter the code of employee e2 \n");
	scanf("%d",&e1.name);
	printf("Enter the salary of employee e2 \n");
	scanf("%d",&e1.salary);
	printf("Enter the name of employee e2 \n");
	scanf("%s",e1.name);

	printf("Enter the code of employee e3 \n");
	scanf("%d",&e1.name);
	printf("Enter the salary of employee e3 \n");
	scanf("%d",&e1.salary);
	printf("Enter the name of employee e3 \n");
	scanf("%s",e1.name);



	return 0;
}
