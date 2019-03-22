#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n,p,d,v,sum,o;
	int a[20];
	printf("Enter number of elements in array\n");
   scanf("%d", &n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the value to be inserted");
	scanf("%d",&v);
	printf("enter the position to insert");
	scanf("%d",&p);

	for(j=n-1;j>=p-1;j--)
	{	
		a[j+1]=a[j];
	}
		a[p-1]=n;
	printf("array is");
	for(d=0;d<=n;d++)
	{
		printf("%d",a[d]);
	}
	sum=0;
	for(o=0;0<=n;o++)
	{
		sum=sum+a[o];
	}
	printf("sum=%d",sum);
	return 0;
}
