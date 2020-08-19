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
		for(j=i+1;j<n;j++)
		{
			if(a[i]>=a[j])
			{
				t=a[j];
				a[i]=a[j];
				a[j]=t;
			}			 
		} 
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}	
	return 0;
}
