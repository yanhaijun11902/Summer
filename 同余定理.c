#include<stdio.h>
void main()
{
	int m,a,b;
	printf("����ģm:\n");
	scanf("%d",&m);
	printf("�ֱ���������������a��b:\n");
	scanf("%d %d",&a,&b);
	if((a%m)==(b%m))
	printf("a,b��ģmͬ��\n");
	else
	printf("a,b��ģm��ͬ��\n");
}