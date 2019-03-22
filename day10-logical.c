#include<stdio.h>
#include<conio.h>
main()
{
	int a=10,b=9,c=10;
	if(a>b&&a>c)
	{
		printf("a is greater\n");
	}
	if(a>b||c<a)
	{
		printf("a or c is greater\n");
	}
	if(a!=b)
	{printf("both are different");
	}
}
