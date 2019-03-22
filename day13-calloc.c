#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int n,i,*arr;
	printf("enter the array size");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	if(arr==NULL)
	{
		printf("memory is full\n");
	}
	else
	{
		for(i=0;i<n;i++)
		{
		printf("%d\n",*(arr+i));
	    }
	    printf("enter the elements");
	    for(i=0;i<n;i++)
	    {
	    	scanf("%d",&arr[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	    	printf("%d\n",&arr[i]);
	    }
	}
}
