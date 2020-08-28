/**
给你一个整数数组?nums，请你将该数组升序排列。

?

示例 1：

输入：nums = [5,2,3,1]
输出：[1,2,3,5]
示例 2：

输入：nums = [5,1,1,2,0,0]
输出：[0,0,1,1,2,5]
?

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-an-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
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