#include<stdio.h>
#include<conio.h>

main()
{
	int sum(int *e,int *f);
	int a,b,c;
	int *s,*d,*p;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	s=&a;
	d=&b;
	c=7;
	c=sum(s,d);
	printf("address of function is %d",&sum);
	printf("%d",c);
}
int sum(int *e,int *f)
{
	int c;
	c=*e+*f;
	return c;
}
