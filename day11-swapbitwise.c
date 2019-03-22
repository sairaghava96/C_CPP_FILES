#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int x,y;
	printf("enter any two numbers");
	scanf("%d%d",&x,&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("x=%d\ny=%d",x,y);
}
