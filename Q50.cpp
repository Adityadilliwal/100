//Gross salary of employees
#include<stdio.h>
struct Employee
	{
		char empname[20];
		float basicpay,da;
	};
int main()
{
	struct Employee e[100];
	for(int i=1;i<=100;i++)
	{
		printf("Enter details of %d employee\n",i);
	    scanf("%s%f",&e[i].empname,&e[i].basicpay);
	    e[i].da=e[i].basicpay*0.52;
    }
	printf("Employee's Name \t Gross Salary\n");
	for(int i=1;i<=100;i++)
	printf("%s%f\n",e[i].empname,e[i].basicpay+e[i].da);
	return 0;
}
