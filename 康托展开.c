#include<stdio.h>
void main()
{
	int i,j,number,rest,count,p,q;
	int n=0,sum=0;
	int a[10];
	printf("input a number:\n");
	scanf("%d",&number);
	while(number!=0)
	{  
		rest=number%10;
		n++;
		number=number/10;	
	}
	printf("input the same number as before:\n");
	scanf("%d",&number);
	i=n-1;
		while(number!=0)
	{  
		rest=number%10;
		a[i]=rest;
		i--;
		number=number/10;	
	}

	printf("%d\n",n);
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		p=1;
		q=1;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
				count++;
			p=p*q;
			q++;
		}
		sum=count*p+sum;
	}
	printf("%d\n",sum);
}
