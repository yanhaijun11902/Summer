#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,p;
	printf("�����������εı߳�\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
		printf("�����δ���\n");
	else
		exit(0);
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("�����ε������%f\n",s);
}
