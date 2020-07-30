#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,p;
	printf("请输入三角形的边长\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
		printf("三角形存在\n");
	else
		exit(0);
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("三角形的面积是%f\n",s);
}
