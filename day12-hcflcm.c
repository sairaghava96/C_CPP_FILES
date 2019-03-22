#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,t,h,l,p;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	p=a*b;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	h=a;
	l=p/h;
	printf("lcm is %d\nhcf is %d",l,h);
}
