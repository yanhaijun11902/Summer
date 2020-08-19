#include <stdio.h>
int main() 
{
	int a[1000],n,i,j,t; 
	printf("总共多少个数：\n");
	scanf("%d",&n); 
	printf("please input the number group:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)//一定是j<n-i-1，因为如果 j<n-i，那么i=n-1的时候，循环里j就要j<1,就只有j[0] 
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

