#include<stdio.h>
#include<conio.h>
main()
{
	int i,sum,n;
	printf("enter the number");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		sum++;
	}
	printf("number of divisors is %d",sum);
}
