#include <stdio.h>
int main() 
{
	int i,j,m,n,t,count=0; 
	int a[10][10]; 
	printf("��������ת�õĶ�ά�����������������\n");
	scanf("%d%d",&m,&n);
	printf("�����ά���飺\n");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i>j)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
		}
	}
		for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
			count++;
			if(count%m==0)
			printf("\n");
		}
	}
	return 0;
}
