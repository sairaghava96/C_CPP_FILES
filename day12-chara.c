#include<stdio.h>
#include<conio.h>
main()
{
int b,sumn,sumc,sums,sumsp;
char a;
printf("enter the character");
	scanf("%c",&a);
	if(a>47&&a<58)
	{
		printf("number\n");
	}
	else if(a>64&&a<91)
	{
		printf("capital letter\n");
	}
    else if(a>96&&a<123)
	{
		printf("smallcase letter\n");
	}
    else
	{
		printf("special character\n");
	}
}
