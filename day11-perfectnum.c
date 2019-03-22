#include<stdio.h>
#include<conio.h>
main()
{
	int i,sum,n;
	printf("enter the number");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
	    sum=sum+i;	
	}
	if(sum==n)
	{
	printf("number  is perfect no");
    }
	else
	{
	printf("not a perfect no");
    }
}
