
#include <stdio.h>
void quicksort(int low,int high,int sort[]);
void display(int sort[],int size);
int main()
{
	int sort[]={2,3,5,6,7,1,4,9,0,8};
	quicksort(0,9,sort);
	display(sort,10);
	return 0;
}
void quicksort(int low,int high,int sort[])
{
    if(low>=high)
    {
    	return;
	}
	int i=low,j=high,flag=sort[i],countflag;
	while(i<j)
	{
		while(sort[j]>=flag&&i<j)
		j--;
		if(i<j)
		sort[i]=sort[j];
		while(sort[i]<flag&&i<j)
		i++;
		if(i<j)
		sort[j]=sort[i];
	}
	sort[i]=flag;
	countflag=i;
	quicksort(low,countflag-1,sort);
	quicksort(countflag+1,high,sort);
} 
void display(int sort[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\n",sort[i]);
	}
}

