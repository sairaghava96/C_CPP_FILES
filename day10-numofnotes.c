#include<stdio.h>
#include<conio.h>
int main()
{
		int a,c;
	float n;
	printf("enter the amount\n");
	scanf("%d",&a);
	printf("how do u want to convert\n");
	printf("1.2000 \n2.500 \n3.200\n4.100\n5.50");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			n=a/2000;
			printf("no of notes are %f\n",n);
			break;
			case 2:
				n=a/500;
				printf("no of notes are %f\n",n);
				break;
					case 3:
			n=a/200;
			printf("no of notes are %f\n",n);
			break;
			case 4:
				n=a/100;
				printf("no of notes are %f\n",n);
				break;
				case 5:
				n=a/50;
				printf("no of notes are %f\n",n);
				break;
				default :
					printf("wrong choice");
				}
}
