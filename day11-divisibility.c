#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,s,e,f,diff,c,d;
	char ch='Y';
	while(ch=='y'||ch=='Y')
	{
		printf("enter the number");
	scanf("%d",&a);
	printf("which number u want to check\n");
	printf("1.1\n2.2\n3.3\n4.4\n5.5\n6.6\n7.7\n8.8\n9.9\n10.10\n11.11\n");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			{
				printf("number is divisible by 1");
				break;
			}
		case 2:
			{
				if(a%2==0)
				printf("number is divisible by 2");
				else printf("number is not divisible by 2");
				break;
				
			}
		case 3:
			{
				s=0;
	        b=a;
	        while(b>0)
	        {
	      	d=a%10;
	    	b=a/10;
	    	a=b;
	    	s=s+d;
	        }
	        if(s%3==0)
	        printf("number is divisible by 3");
	        else printf("number is not divisible by 3");
	        break;
			}
		case 4:
			{
				b=a%100;
				if(b%4==0)
				printf("number is divisible by 4");
				else printf("number is not divisible by 4");
				break;
				
			}
		case 5:
			{
				if(a%10==0||a%10==5)
				{
				printf("number is divisible by 5");
		     	}
		     	else printf("number is not divisible by 5");
	            break;
			}
		case 6:
			{
				s=0;
	        b=a;
	        while(b>0)
	        {
	      	d=a%10;
	    	b=a/10;
	    	a=b;
	    	s=s+d;
					if(a%2==0&&s%3==0)
				{
				printf("number is divisible by 6");
		     	}
		     	else printf("number is not divisible by 6");
		     }
		     break;
			}
		case 7:
			{
					if(a%7==0)
				{
				printf("number is divisible by 7");
		     	}
		     	else printf("number is not divisible by 7");
		     	break;
			}
		case 8:
			{
				b=a%1000;
				if(b%4==0)
				printf("number is divisible by 8");
				else printf("number is not divisible by 8");
				break;
			}
		case 9:
			{
					s=0;
	        b=a;
	        while(b>0)
	        {
	      	d=a%10;
	    	b=a/10;
	    	a=b;
	    	s=s+d;
	        }
	        if(s%9==0)
	        printf("number is divisible by 9");
	        else printf("number is not divisible by 9");
	        break;
			}
		case 10:
			{
				if(a%10==0)
				{
				printf("number is divisible by 10");
		     	}
		     	else printf("number is not divisible by 10");
		     	break;
			}
		case 11:
			{
			s=0;
			f=0;
	        b=a;
	        while(b>0)
	        {
	      	d=a%10;
	    	b=a/10;
	    	s=s+d;
	    	e=b%10;
	    	b=b/10;
	    	a=b;
	    	f=e+f;
	        }	
	        diff=s-f;
	        if(diff==0||diff%11==0)
	        {
	        	printf("number is divisible by 11");
	        }
	        else printf("number is not divisible by 11");
	        break;
			}
			default: 
			printf("wrong choice");
			break;
			}
			printf ( "\nTo Continue press 'Y' exit press 'N'" );
			
				ch = getche( ) ;
			
	}
}
