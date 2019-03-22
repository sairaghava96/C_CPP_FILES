#include<stdio.h>
#include<conio.h>
main()
{
int k,i,sum,sumc;
printf("enter the size");
scanf("%d",&k);
char a[k];
printf("enter the string");
	scanf("%s",a);
	sum=0;
	sumc=0;
	for(i=0;i<k;i++)
	{
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	{
		sum=sum+1;
	}
	else 
	{
		sumc=sumc+1;
	}
    }
    printf("%d\n%d",sum,sumc);
}
