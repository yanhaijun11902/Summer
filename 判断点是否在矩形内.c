#include <stdio.h>
int main() 
{
	int x1,y1,x2,y2,x,y,minx,miny,maxx,maxy;
	printf("����������½ǵ������\n");
	scanf("%d%d",&x1,&y1); 
	printf("����������Ͻǵ������\n");
	scanf("%d%d",&x2,&y2); 
	printf("������Ҫ�жϵĵ������\n");
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
	printf("���ھ�����\n"); 
}
else
printf("�㲻�ھ�����\n");
	return 0;
}
