#include<stdio.h>
#include<conio.h>
main()
{
	int k,i,sum;
char a[20];
printf("enter the string");
	scanf("%s",a);
	sum=0;
	for(i=0;i<20;i++)
	{
	if(a[i]=='\0')
	{
		
		break;
	}
	sum=sum+1;
    }
     printf("%d",sum);
}
