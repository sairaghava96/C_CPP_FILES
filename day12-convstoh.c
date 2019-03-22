#include<stdio.h>
#include<conio.h>
main()
{
	char a,d,h;
	printf("enter a character");
	scanf("%c",&a);
	if(a>64&&a<91)
	{
		d=a+32;
		printf("lower case is %c",d);
	}
	else if(a>96&&a<123)
	{
		h=a-32;
		printf("higher case is %c",h);
	}
}
