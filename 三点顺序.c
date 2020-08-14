#include<stdio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3,a,b;
	printf("请依次输入三点坐标\n");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	if(!x1&&!x2&&!x3&&!y1&&!y2&&!y3)
	{
		exit(0);
	}
	else
	{
	a=(x2-x1)*(y3-y1);
	b=(y2-y1)*(x3-x1);
	}
	if(a-b<0)
	printf("顺时针\n");
	else if(a-b>0)
	printf("逆时针\n");
	else
	printf("一条直线上\n");
	return 0;
}