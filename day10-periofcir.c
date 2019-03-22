#include<stdio.h>
#include<conio.h>
int main()
{
	int r;
	float pi,a,p;
	pi=3.14;
	printf("enter the radius of circle");
	scanf("%d",&r);
	a=pi*r*r;
	p=2*pi*r;
	printf("area=%f\nperimeter=%f",a,p);
}
