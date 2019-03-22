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
		d=b%10;
		b=b/10;
		s+=d*d*d;
	}
	if(s==a)
	printf("amstrong number");
	else
	printf("not");
}
