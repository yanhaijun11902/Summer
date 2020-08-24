#include <stdio.h>
int search(int *p,int n,int item);
int main() 
{
    int r,item;
	int group[10]={1,2,3,4,5,6,7,8,9,10};
    printf("输入你想查找的数字：\n");
    scanf("%d",&item);
	r=search(group,10,item);
	if(r>=0)
	printf("存在");
	else
	printf("不存在");
	return 0;
}
int search(int *p,int n,int item)
{
	int low,high,mid;
	high=n-1;
	low=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(p[mid]==item)
		    break;
     	if(p[mid]>item)
     		high=mid-1;
		else
			low=mid+1;
	 } 	 
	if(low>high)
	    return -1;
	else
	    return mid;
} 
