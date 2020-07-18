#include<stdio.h>
void main()
{
	int m,a,b;
	printf("输入模m:\n");
	scanf("%d",&m);
	printf("分别输入两个正整数a和b:\n");
	scanf("%d %d",&a,&b);
	if((a%m)==(b%m))
	printf("a,b对模m同余\n");
	else
	printf("a,b对模m不同余\n");
}