#include <stdio.h>
int main() 
{
	int a[1000],n,i,j,t; 
	printf("�ܹ����ٸ�����\n");
	scanf("%d",&n); 
	printf("please input the number group:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)//һ����j<n-i-1����Ϊ��� j<n-i����ôi=n-1��ʱ��ѭ����j��Ҫj<1,��ֻ��j[0] 
		{
			if(a[j]>=a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			 
		} 
	}
	for(j=0;j<n;j++)
	{
		printf("%d\n",a[j]);
	}
	
	return 0;
}

