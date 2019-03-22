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
	struct std s[3];
	printf("enter name roll p c m s avg");
	for(i=0;i<3;i++)
	scanf("%s%d%d%d%d%d%f",&s[i].name,&s[i].r,&s[i].p,&s[i].c,&s[i].m,&s[i].s,&s[i].avg);
	for(i=0;i<3;i++)
	printf("%s %d %d %d %d %d %f\n",s[i].name,s[i].r,s[i].p,s[i].c,s[i].m,s[i].s,s[i].avg);
}
