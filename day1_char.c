#include<stdio.h>
#include<conio.h>
void main()
{
	unsigned int a=4;
	short signed int g=10;
	short unsigned int h=11;
	unsigned int i=127;
	long signed int j=253;
	long unsigned int k=22;

	float c=2.36;
	double d=1.44;
	long double e=1.7;
	char b='3';
	unsigned char f='a';

printf("size of a=%d \n size of g=%d\n size of h=%d\n size of i=%d\n size of j=%d\n size of k=%d\n",sizeof(a),sizeof(g),sizeof(h),sizeof(i),sizeof(j),sizeof(k));
printf("size of b=%d\n  size of f=%d\n",sizeof(b),sizeof(f));
//fflush(stdin);
printf("size of c=%d\n size of d=%d\n size of e=%d",sizeof(c),sizeof(d),sizeof(e));


}
