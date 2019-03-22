#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,s;
	printf("enter the number");
	scanf("%d",&a);
	s=0;
	b=a;
	while(b>0)
	{
		b=a/10;
		a=b;
		s++;
	}
	printf("no of digits are %d",s);
}
