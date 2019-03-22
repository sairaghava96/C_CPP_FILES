#include<stdio.h>
#include<conio.h>
main()
{int a,b,c;
printf("give any three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{if(a>c)
{printf("%d is large number",a);
}
}
else if(b>c)
{printf("%d is large number",b);
}
else{printf("%d is large number",c);
}

}
