/**
一个整型数组 nums 里除两个数字之外，其他数字都出现了两次。请写程序找出这两个只出现一次的数字。要求时间复杂度是O(n)，空间复杂度是O(1)
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
    int max=nums[0];
    int count=0,i;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>max)
        {
            max=nums[i];
        }
    }
    int *f=(int*)malloc(sizeof(int)*(max+1));
    for(i=0;i<=max;i++)
    {
        f[i]=0;
    }
    for(i=0;i<numsSize;i++)
    {
        f[nums[i]]=f[nums[i]]+1;
    }
    int *r=(int*)malloc(sizeof(int)*numsSize);
    for(i=0;i<=max;i++)
    {
        if(f[i]==1)
        {
          r[count]=i;
            count++;
        }
    }
    *returnSize=count;
    return r;

}