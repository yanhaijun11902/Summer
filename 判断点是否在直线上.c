#include<stdio.h>
int main()
{
	double x1,y1,x2,y2,x,y;
    printf("�����߶�PQ�϶˵�P������\n");
    scanf("%d%d",&x1,&y1);
	printf("�����߶�PQ�϶˵�Q������\n");
	scanf("%d%d",&x2,&y2);
	printf("������Ҫ�жϵĵ������\n");
	scanf("%d%d",&x,&y);
	double minx,miny,maxx,maxy;
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
	if(x>=minx&&x<=maxx&&y>=miny&&y<=maxy&&((x-x1)*(y2-y1)==(y-y1)*(x2-x1))) 
	{
		printf("����ֱ����\n");
	}
	else
	printf("�㲻��ֱ����\n");
	return 0;
}
