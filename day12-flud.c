#include<stdio.h>
#include<conio.h>
main()
{
	int r,i,j;
	printf("no of rows");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("*");
	    }
	    printf("\n");
	}
}
