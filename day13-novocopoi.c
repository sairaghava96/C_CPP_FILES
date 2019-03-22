#include<stdio.h>
#include<conio.h>
int count(int *n,int*m,char name[]);
main()
{
	
	int l,v,c,i;
	int *n,*m;
	char age[20];
		printf("enter the name");
	scanf("%s",age);
	printf("%s\n",age);
	n=&v;
	m=&c;
	v=0;
	c=0;
    count(n,m,age);
	printf("v=%d\n",v);
	printf("c=%d\n",c);
}
	int count( int *n,int *m ,char name[])
	{
		
		int l,i;
	l=strlen(name);
	printf("%d\n",l);
	
	for(i=0;i<l;i++)
		{
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
		{
			*n=*n+1;
		}
	
		else
		{
			*m=*m+1;
		}
	}
    }
