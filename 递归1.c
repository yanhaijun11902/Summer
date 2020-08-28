/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArray(int* nums, int numsSize, int* returnSize)
{
   quicksort(0,numsSize-1,nums);
   *returnSize=numsSize;
    return nums;
}
void quicksort(int low,int high,int *nums)
{
   if(low>=high)
    {
        return;
    }
    int i,j,flag,countflag;
    i=low;
    j=high;
    flag=nums[i];
    while(i<j)
    {
        while(nums[j]>=flag&&i<j)
		j--;
		if(i<j)
		nums[i]=nums[j];
		while(nums[i]<flag&&i<j)
		i++;
		if(i<j)
		nums[j]=nums[i];
    }
    nums[i]=flag;
    countflag=i;
    quicksort(low,countflag-1,nums);
    quicksort(countflag+1,high,nums);
}