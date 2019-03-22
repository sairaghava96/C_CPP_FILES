#include<stdio.h>
#include<conio.h>
main()
{
	
	int i,j,len;
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
	char b[len];
    for(j=0;j<len;j++)
	{
	b[j]=a[len-j-1];
    }
    b[j]='\0';
    printf("reversed  string\n");
    printf("%s",b);
}
