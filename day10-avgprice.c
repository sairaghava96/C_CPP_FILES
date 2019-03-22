#include<stdio.h>
#include<conio.h>
main()
{
	float w1,w2,p1,p2,avg_p;
	printf("enter the weights and prices");
	scanf("%f%f%f%f",&w1,&w2,&p1,&p2);
	avg_p=(w1*p1+w2*p2)/2;
	printf("average price is %0.2f",avg_p);
}
