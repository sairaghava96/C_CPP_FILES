#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("enter number");
	scanf("%d",&a);
	switch(a)
	{
		case 0:
			{
				printf("%d:Zero",a);
				break;
			}
		case 1:
			{
				printf("%d:one",a);
				break;
			}
		case 2:
			{
				printf("%d:two",a);
				break;
			}
		case 3:
			{
				printf("%d:three",a);
				break;
			}
		case 4:
			{
				printf("%d:four",a);
				break;
			}
		case 5:
			{
				printf("%d:five",a);
				break;
			}
		case 6:
			{
				printf("%d:six",a);
				break;
			}
		case 7:
			{
				printf("%d:seven",a);
				break;
			}
		case 8:
			{
				printf("%d:eight",a);
				break;
			}
		case 9:
			{
				printf("%d:nine",a);
				break;
			}
			default:
				{
				printf("wrong choice");
				break;
			}
	}
}
