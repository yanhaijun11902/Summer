#include <stdio.h>
int main()
{
	int i,j,h,l; 
	int m=0,n=0;
	int a[10][10];
	printf("�����ά�����������������\n");
	scanf("%d%d",&h,&l);
	printf("�����ά����\n"); 
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
	printf("������%d\n",a[m][n]);
	printf("λ���ǵ�%d��%d��\n",m+1,n+1); 
	return 0;
}
