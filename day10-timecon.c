#include<stdio.h>
#include<conio.h>
int main()
{
	int i,c;
	float h,m;
	printf("enter the value in seconds\n");
	scanf("%d",&i);
	printf("how do u want to convert\n");
	printf("1.hours \n2.minutes");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			h=i/3600;
			printf("the value in hours is %f\n",h);
			break;
			case 2:
				m=i/60;
				printf("the value in minutes is %f",m);
				break;
				default :
					printf("wrong choice");
		
	}
}
