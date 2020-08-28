#include<stdio.h>
int main()
{
    int a[10]={1,4,5,3,2,7,9,8,0};
	int i,j,flag;
	for(i=1;i<10;i++)
	{
		flag=a[i];
		j=i-1;
		while(flag<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=flag;
	}
		for(i=1;i<10;i++)
		{
			printf("%d\t",a[i]);
		}
	return 0;
}