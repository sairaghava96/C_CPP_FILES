#include<stdio.h>
#include<conio.h>
main()
{
	int a,n,i,eve_s,odd_s;
	printf("enter the range of natural numbers");
	scanf("%d%d",&a,&n);
	eve_s=0;
	odd_s=0;
	for(i=a;i<=n;i++)
	{
		if(i%2==0)
		{
			eve_s=eve_s+i;
		}
		else
		odd_s=odd_s+i;

	}
	printf("even sum is %d \nodd sum is %d",eve_s,odd_s);
}
