int maxSubArray(int* nums, int numsSize)
{
    int i;
    int p=nums[0],sum=nums[0];
    for(i=1;i<numsSize;i++)
    {
        if(p+nums[i]<nums[i])
         p=nums[i];
        else
         p=p+nums[i];
         if(sum<p)
         sum=p;   
    }
      return sum;
}
/*输入一个整型数组，数组中的一个或连续多个整数组成一个子数组。求所有子数组的和的最大值。

要求时间复杂度为O(n)*/
