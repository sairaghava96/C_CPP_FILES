#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],b[20];
	int i,n,sum;
	printf("Enter number of elements in array\n");
   scanf("%d", &n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("b is");
	for(i=0;i<n;i++)
	printf("%d",b[i]);
}
