#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,no_five,no_two,b,c;
	printf("enter the factorail number");
	scanf("%d",&n);
	no_five=0;
	no_two=0;
	b=n;
	c=n;
	while(b>0)
	{
		b=b/5;
		no_five=no_five+b;
	}
	while(c>0)
	{
		c=c/2;
		no_two=no_two+c;
	}
	if(no_two>=no_five)
	printf("no of zeros are %d",no_five);
	else
	printf("no of zeros are %d",no_two);
}
