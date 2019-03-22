#include<stdio.h>
#include<conio.h>
main()
{
	int day;
	float year,month;
	printf("enter the day");
	scanf("%d",&day);
	year=0.00274*day;
	month=0.0329*day;
	printf("year is %f\nmonth is %f",year,month);
}
