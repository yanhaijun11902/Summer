#include <stdio.h>
void main()
{
	int a[100000];
	int i,j,n;
	printf("input n:");
	scanf("%d",&n);
	a[1]=0;
	for(i=2;i<=n;i++)
	{
		a[i]=i;
	}
	for(i=2;i<=n;i++)
	{
		if(a[i]!=0)
		{
		for(j=i+1;j<=n;j++)
		{
			if(a[j]%a[i]==0&&a[i]!=0)
				a[j]=0;
		}
		}
	}
	for(i=2;i<=n;i++)
	{
		if(a[i]!=0)
			printf("%5d\n",a[i]);
	}
}



