#include <stdio.h>
int main()
{
	int a,b,c,flag=0,day,i; 
	int date[2][13]={
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31},
	};
	printf("�������ڣ�\n");
	scanf("%d-%d-%d",&a,&b,&c);
	if((a%4==0&&a%100!=0)||(a%400==0))
	{
		flag=1; 
	} 
	day=c;
	for(i=0;i<b;i++)
	{
		day=day+date[flag][i];
	}
	printf("������һ��ĵ�%d��\n",day);
	return 0;
}
