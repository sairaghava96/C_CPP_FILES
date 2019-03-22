#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20];
	int i,n,sum;
	printf("Enter number of elements in array\n");
   scanf("%d", &n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of elements is %d",sum);
}
