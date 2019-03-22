#include<stdio.h>
#include<conio.h>
main()
{
	int s1,s2,t1,t2;
	float a,d;
	printf("enter the speeds and time");
	scanf("%d%d%d%d",&s1,&s2,&t1,&t2);
	a=(t1+t2)*s1*s2;
	d=a/(s2-s1);
	printf("the distance is %f",d);
}
