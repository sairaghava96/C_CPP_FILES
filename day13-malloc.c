#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct emp
{
	int eroll;
	char ename[20];
	float esal;
};
void main()
{
	struct emp* ptr;
	ptr=(struct emp*)malloc(sizeof(struct emp));
	if(ptr==NULL)
	{
		printf("memory is full\n");
	}
	else
	{
		printf("enter employee details");
		scanf("%d%s%f",&ptr->eroll,ptr->ename,&ptr->esal);
		printf("%d %s %f\n",ptr->eroll,ptr->ename,ptr->esal);
		printf("%d %d %d",&ptr->eroll,ptr->ename,&ptr->esal);
	}
}
