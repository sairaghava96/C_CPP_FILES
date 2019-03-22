#include<stdio.h>
#include<conio.h>
main()
{
	int i,sum,n,a,b;
	printf("enter the number");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
		b=i*i;	
	    if(b==n)
		{
	     printf("number  is perfect sqaure");
	     sum=sum+1;
        }
        }
    }
	if(sum==0)
	printf("not a perfect sqaure ");
    
}
