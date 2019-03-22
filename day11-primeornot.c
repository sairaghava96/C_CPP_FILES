#include<stdio.h>
#include<conio.h>
main()
{
	int i,sum,n;
	printf("enter the number");
	scanf("%d",&n);
	sum=0;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		sum=sum+1;
	}
	if(sum<2)
	printf("%d is prime number",n);
	else 
	printf("not a prime number");
}
