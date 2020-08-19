#include <stdio.h>
int main()
{
	int i,j,h,l; 
	int m=0,n=0;
	int a[10][10];
	printf("输入二维数组的行数和列数：\n");
	scanf("%d%d",&h,&l);
	printf("输入二维数组\n"); 
	for(i=0;i<h;i++)
	{
	for(j=0;j<l;j++)
	{
	scanf("%d",&a[i][j]);
    }
    }
	for(i=0;i<h;i++)
	{
	for(j=0;j<l;j++)
	{
		if(a[i][j]>a[m][n])
		{
			m=i;
			n=j;
		}
	}
    } 
	printf("最大的是%d\n",a[m][n]);
	printf("位置是第%d行%d列\n",m+1,n+1); 
	return 0;
}
