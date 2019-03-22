#include<stdio.h>
#include<conio.h>
main()
{
	int n,r,a,b,i,j;
	float p;
	printf("enter the values of n and r");
	scanf("%d%d",&n,&r);
	a=1;
	for(i=n;i>=n-r+1;i--)
	{
		a=i*a;
	}
	b=1;
	for(j=r;j>=1;j--)
	{
		b=j*b;
	}
	p=a/b;
	printf("%dc%d=%f",n,r,p);
}
