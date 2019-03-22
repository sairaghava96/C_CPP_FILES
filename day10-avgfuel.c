#include<stdio.h>
#include<conio.h>
main()
{
	float d,f,c;
	printf("enter the distance travelled and spent fuel");
	scanf("%f%f",&d,&f);
	c=f/d;
	printf("average fuel consumtion per liter is %0.2f",c);
}
