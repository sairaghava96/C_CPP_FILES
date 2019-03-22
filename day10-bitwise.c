#include<stdio.h>
#include<conio.h>
main()
{
	int a=64,b=1,c,d,e,f,g,h;
	c=a&b;
	printf("c=%d\n",c);
	d=a|b;
	printf("d=%d\n",d);
	e=a<<b;
	printf("e=%d\n",e);
	f=a>>b;
	printf("f=%d\n",f);
	g=b>>a;
	printf("g=%d\n",g);
	h=b<<a;
	printf("h=%d\n",h);
}
