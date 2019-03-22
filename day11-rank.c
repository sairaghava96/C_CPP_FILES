#include<stdio.h>
#include<conio.h>
main()
{
	int k,i;
	
	printf("enter the array size");
	scanf("%d",&k);
	char a[k];
	printf("enter the characters");
	for(i=0;i<k;i++)
	{
	scanf("%s",a[i]);
    }
    for(i=0;i<k;i++)
    {
    printf("%s",a[i]);
    }
}
