#include<stdio.h>
#include<conio.h>
main()
{int mat,phy,che,eng,san,sum;
float avg;
printf("enter the marks");
scanf("%d%d%d%d%d",&mat,&phy,&che,&eng,&san);
sum=mat+phy+che+eng+san;
avg=(mat+phy+che+eng+san)/5;
printf("sum is %d\n average is %f",sum,avg);
}
