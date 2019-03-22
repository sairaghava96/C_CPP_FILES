#include<stdio.h>
#include<conio.h>
#include<LIMITS.h>
void main()
{
	signed int a=4;
	short signed int g=10;
	short unsigned int h=11;
	unsigned int i=127;
	long signed int j=253;
	long unsigned int k=22;
	char b='3';
	unsigned char f='a';

printf("range of a is %d to %d size is %d\n",INT_MIN,INT_MAX,sizeof(a));
printf("range of g is %d to %d size is %d\n",SHRT_MIN,SHRT_MAX,sizeof(g));
printf("range of h is 0 to %u size is %d\n",SHRT_MAX,sizeof(h));
printf("range of i is 0 to %u size is %d\n",UINT_MAX,sizeof(i));
printf("range of j is %ld to %ld size is %d\n",LONG_MIN,LONG_MAX,sizeof(j));
printf("range of k is 0 to %lu size is %d\n",ULONG_MAX,sizeof(k));
printf("range of b is %c to %c size is %d\n",CHAR_MIN,CHAR_MAX,sizeof(b));
printf("range of f is 0 to %d size is %d\n",UCHAR_MAX,sizeof(f));
}
