#include<stdio.h>
#include<conio.h>
struct std
{
	char name[20];
	int r;
	int m,p,c,s;
	float avg;
};
main()
{
	int i;
	int *ptm[2];
	struct std s[2];
		struct std *ptr ;
		
ptr = &s[1];
	printf("enter name roll p c m s avg");
	for(i=0;i<2;i++)
	scanf("%s%d%d%d%d%d%f",&s[i].name,&s[i].r,&s[i].p,&s[i].c,&s[i].m,&s[i].s,&s[i].avg);

	for(i=0;i<2;i++)
//	printf("%s%d%d%d%d%d%f\n",s[i].name,s[i].r,s[i].p,s[i].c,s[i].m,s[i].s,s[i].avg);
	printf("%s %d %d %d %d %d %f\n",ptr->name,ptr->r,ptr->p,ptr->c,ptr->m,ptr->s,ptr->avg);
}
