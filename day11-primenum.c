#include<stdio.h>
#include<conio.h>
main()
{
	int i,sum,n,j;
	printf("enter the number");
	scanf("%d",&n);

	for(j=2;j<=n;j++)
	{
			sum=0;
	for(i=2;i<=j;i++)
	{
		if(j%i==0)
		sum++;
	}
	if(sum<2)
	printf("%d\t",j);
    }
}
