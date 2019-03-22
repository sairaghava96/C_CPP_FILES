#include<stdio.h>
#include<conio.h>
main()
{
	
	int i,j,len1,len2,c;
	char a[20],b[20],s[40];
printf("enter the string");
	scanf("%s",a);
	len1=0;
	for(i=0;a[i]!='\0';i++)
	{
	len1=len1+1;
    }
    printf("length of string %d\n",len1);
    
    for(j=0;j<len1;j++)
	{
	b[j]=a[j];
    }
    b[j]='\0';
	printf("%s\n",b);
	c=0;
	for(i=0;i<len1;i++)
	{
		if(a[i]!=b[i])
		{
			c=c+1;
		}
	}
	if(c==0)
	{
		printf("both are same\n");
	}
    len2=0;
	for(i=0;a[i]!='\0';i++)
	{
	len2=len2+1;
    }
    printf("length of string %d\n",len2);
    for(i=0;i<len1+len2;i++)
    {
    	if(i<len1)
    	{
    		s[i]=a[i];
    	}
    	else
    	{
    		s[i]=b[i-len1];
    	}
    }
    s[i]='\0';
    printf("array s is\n");
	printf("%s\n",s);
}
