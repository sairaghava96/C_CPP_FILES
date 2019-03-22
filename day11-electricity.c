#include<stdio.h>
#include<conio.h>
main()
{
	int id,unit;
	float a,b,c;
	printf("enter 1.customer id\n2.unit consumed");
	scanf("%d%d",&id,&unit);
	if(unit<200)
	{
		a=unit*1.2;
		if(a<100)
		{
			printf("Net Amount Paid By the Customer :100\n");
		}
		else 
		{
			printf("Net Amount Paid By the Customer :%f\n",a);
		}
	}
	else if(unit>199&&unit<400)
	{
		a=unit*1.5;
		if(a>400)
		{
			b=0.15*a;
			c=a+b;
			printf("Surchage Amount:%f",b);
			printf("Net Amount Paid By the Customer :%f\n",c);
		}
		else 
		{
			printf("Net Amount Paid By the Customer :%f\n",a);
		}
	}
	else if(unit>399&&unit<600)
	{
		a=unit*1.8;
		b=0.15*a;
			c=a+b;
			printf("Surchage Amount:%f\n",b);
			printf("Net Amount Paid By the Customer :%f\n",c);
	}
	else if(unit>599)
    {
    		a=unit*2.0;
		b=0.15*a;
			c=a+b;
			printf("Surchage Amount:%f\n",b);
			printf("Net Amount Paid By the Customer :%f\n",c);
    }	
}
