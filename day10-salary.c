#include<stdio.h>
#include<conio.h>
main()
{
	int emp_id,no_hr,am_hr;
	float sal;
	printf("amount per hour");
	scanf("%d",&am_hr);
	printf("1.employee id\n2.no of hrs he worked\n");
	scanf("%d%d",&emp_id,&no_hr);
	sal=no_hr*am_hr;
	printf("salary of employee is %0.2f",sal);
}
