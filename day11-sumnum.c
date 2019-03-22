#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,s,d;
	printf("enter the number");
	scanf("%d",&a);
	s=0;
	b=a;
	while(b>0)
	{
		d=a%10;
		b=a/10;
		a=b;
		s=s+d;
	}
	printf("sum of digits are %d",s);
}
