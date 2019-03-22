#include<stdio.h>
#include<conio.h>
main()
{
	int a,r,i,j;
	printf("no of rows");
	scanf("%d",&r);
	a=0;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			a=a+1;
		printf("%d",a);
	    }
	    printf("\n");
	}
}
