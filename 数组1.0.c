#include<stdio.h>
int main()
{
	int i,count=0,n;
    int a[1000]={1,1};
	printf("你想输出多少个数？\n");
		scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
		for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		count++;
		if(count%5==0)
			printf("\n");
	}
}
