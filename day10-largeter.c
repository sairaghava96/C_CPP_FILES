#include<stdio.h>
#include<conio.h>
main()
{int a,b,c;
printf("give any three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c?printf("a is large\n"):printf("a is not large\n"))
if(b>a&&b>c?printf("b is large\n"):printf("b is not large\n"))
if(c>a&&c>b?printf("a is large\n"):printf("c is not large\n"));
}
	
