#include<stdio.h>
#include<conio.h>
main()
{
	int i,k,j;
	printf("enter the array size");
	scanf("%d",&k);
	int a[k],b[k];
	printf("enter the elements");
	for(i=0;i<k;i++)
	{
	scanf("%d",&a[i]);
    }
    for(j=0;j<k;j++)
	{
	b[j]=a[k-j-1];
    }
    printf("reversed  array\n");
    for(j=0;j<k;j++)
    {
    printf("%d\n",b[j]);
    }
    
}
