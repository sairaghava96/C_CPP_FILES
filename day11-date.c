#include<stdio.h>
#include<conio.h>
main()
{
	int day,mon,year,min,hr,sec,day1,mon1,year1,min1,hr1,sec1;
	printf("enter the date\nmon\nyear\nmin\nhr\nsec");
	scanf("%d%d%d%d%d%d",&day,&mon,&year,&min,&hr,&sec);
	day1=day-18;
	mon1=mon-03;
	year1=year-2019;
	min1=min-5;
	hr1=hr-5;
	sec1=sec-5;
	printf("%d\n%d\n%d\n%d\n%d\n%d",&day1,&mon1,&year1,&min1,&hr1,&sec1);
}
