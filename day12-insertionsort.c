#include<stdio.h>
#include<conio.h>
main()
{
	int a[20];
	int i,n,t,sum,j;
	printf("enter the sie of array");
	scanf("%d",&n);
	printf("enter the values");
	sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<=n;j++)
	{
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	for(i=1;i<n;i++)
	{
		if(a[i-1]>a[i])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
