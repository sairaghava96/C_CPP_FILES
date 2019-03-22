#include<stdio.h>
#include<conio.h>
main()
{
		int a,n,i,avg,sum;
	printf("enter the range of natural numbers");
	scanf("%d%d",&a,&n);
	sum=0;
	for(i=a;i<=n;i++)
	{
		sum=sum+i;
		
	}
	printf("%d",sum);
}
