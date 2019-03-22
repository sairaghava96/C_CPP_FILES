#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int i,j,l;
	char s[20];
	char t;
	printf("enter the string");
	scanf("%s",s);
	l=strlen(s);
	printf("%s\n",s);
	printf("%d\n",l);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]>s[j])
			{
				t=s[j];
			s[j]=s[i];
			s[i]=t;
			
			}
		
		}
	}
	
	printf("sorted is %s\n",s);
}
