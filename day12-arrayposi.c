#include<stdio.h>
#include<conio.h>
main()
{
	int i,k,pos_sum,neg_sum;
	pos_sum=0;
	neg_sum=0;
	printf("enter the array size");
	scanf("%d",&k);
	int a[k];
	printf("enter the elements");
	for(i=0;i<k;i++)
	{
	scanf("%d",&a[i]);
    }
    printf("positive numbers are");
    for(i=0;i<k;i++)
    {
    	if(a[i]>=0)
    printf("%d\n",a[i]);
    }
    printf("negative numbers are");
     for(i=0;i<k;i++)
    {
    	if(a[i]<0)
    printf("%d\n",a[i]);
    }
    for(i=0;i<k;i++)
    {
    	if(a[i]>=0)
    pos_sum=pos_sum+a[i];
    }
    printf("sum of positive numbers is %d",pos_sum);
    for(i=0;i<k;i++)
    {
    	if(a[i]<0)
    neg_sum=neg_sum+a[i];
    }
    printf("sum of negative numbers is %d",neg_sum);
    
}
