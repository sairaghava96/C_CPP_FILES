#include<stdio.h>
#include<conio.h>
main()
{
int k,i,sum,sumi,len;
char a[20];
printf("enter the string");
	scanf("%s",a);
	len=0;
	for(i=0;i<20;i++)
	{
	if(a[i]=='\0')
	{
		
		break;
	}
	len=len+1;
    }
	sum=0;
	sumi=0;
	for(i=0;i<len;i++)
	{
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	{
		sum=sum+1;
	}
	else if(a[i]>49&&a[i]<58)
	{
		sumi=sumi+1;
	}
	
    }
    printf("%d\n%d",sum,sumi);
}

