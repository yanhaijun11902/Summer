#include <stdio.h>
int main() 
{
	int x1,y1,x2,y2,x,y,minx,miny,maxx,maxy;
	printf("输入矩形左下角点的坐标\n");
	scanf("%d%d",&x1,&y1); 
	printf("输入矩形右上角点的坐标\n");
	scanf("%d%d",&x2,&y2); 
	printf("输入需要判断的点的坐标\n");
	scanf("%d%d",&x,&y); 
	if(x1>x2)
	{
	maxx=x1;
	minx=x2;
    }
	else
	{
	maxx=x2;
	minx=x1;
    }
    if(y1>y2)
    {
    	maxy=y1;
    	miny=y2;
	}
	else
	{
		maxy=y2;
		miny=y1;
	}
if(x>=minx&&x<=maxx&&y>=miny&&y<=maxy)
{
	printf("点在矩形内\n"); 
}
else
printf("点不在矩形内\n");
	return 0;
}
