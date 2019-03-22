#include<stdio.h>
#include<conio.h>
int main()
{
		int a,c;
	float n;
	printf("enter the weight in tons\n");
	scanf("%d",&a);
	printf("how do u want to convert\n");
	printf("1.metric ton \n2.kilogram \n3.hectogram\n4.dekagram\n5.gram\n6.decigram\n7.centigram\n8.milligram");
	scanf("%d",&c);
	switch(c)
	{
	    	case 1:
		    	n=a/2000;
		    	printf("weight in metric ton is %f\n",n);
		    	break;
			case 2:
				n=a/500;
				printf("weight in kiloram is %f\n",n);
				break;
			case 3:
		    	n=a/200;
		    	printf("weight in hectogram is %f\n",n);
		    	break;
			case 4:
				n=a/100;
				printf("weight in dekagram is %f\n",n);
				break;
			case 5:
				n=a/50;
		    	printf("weight in gram is %f\n",n);
				break;
			case 6:
			    n=a/2000;
			    printf("weight in decigram is %f\n",n);
			    break;
			case 7:
				n=a/500;
				printf("weight in centigram is %f\n",n);
				break;
			case 8:
		     	n=a/200;
			    printf("weight in milliram is %f\n",n);
		    	break;
			default :
					printf("wrong choice");
				}
}
