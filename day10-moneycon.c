#include<stdio.h>
#include<conio.h>
main()
{

float a,b;
int c;
printf("what do u want");
printf("1.dollor to cents\n 2.cents to dollor");
scanf("%d",&c);
switch(c)
{
case 1:
printf("enter the amount in dollors");
scanf("%f",&a);
b=96.5*a;
printf("the amount in cents is %f",b);
break;
case 2:
printf("enter the amount in cents");
scanf("%f",&a);
b=a/96.5;
printf("the amount in dollors is %f",b);
break;
default:
printf("wrong choise");
}
}
