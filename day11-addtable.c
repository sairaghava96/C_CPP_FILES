#include<stdio.h>
#include<conio.h>
main()
{
		int a,i,t;
	printf("which table u want");
	scanf("%d",&a);
	for(i=0;i<=10;i++)
	{
		t=a+i;
		printf("%d+%d=%d\n",a,i,t);
	}
}
