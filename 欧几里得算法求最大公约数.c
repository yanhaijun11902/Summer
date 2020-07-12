#include<stdio.h>
void main()
{
	int a,b,c,t;
	printf("input a and b\n");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	c=a%b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("最大公约数:%d\n",b);
}