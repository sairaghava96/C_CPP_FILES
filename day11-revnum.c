#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,d,r;
	printf("enter the number");
	scanf("%d",&a);
	b=a;
	r=0;
	while(b>0)
	{
		d=a%10;
		r=(d+r)*10;
		b=a/10;
		a=b;
	}
	r=r/10;1
	printf("reverse is %d",r);
}
