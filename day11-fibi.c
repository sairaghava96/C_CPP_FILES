#include<stdio.h>
#include<conio.h>
main()
{
	int i,s,n,b,j,c;
	printf("upto where");
	scanf("%d",&n);
	i=0;
	j=1;
		printf("%d\n%d\n",i,j);
	s=0;
	while(s<=n)
	{
		
		c=i+j;
		i=j;
		j=c;
		printf("%d\n",c);
		s++;
	}
}
