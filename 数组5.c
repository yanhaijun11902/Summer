int findRepeatNumber(int* nums, int numsSize)
{
    int i;
    int *nums2= calloc(numsSize/*数组长度*/,sizeof(int)/*数组每个元素所占的空间大小*/);//calloc分配空间后数组里每个数为0
    for(i=0;i<numsSize;i++)
    {
        if(nums2[nums[i]]==0)
            nums2[nums[i]]=1;
        else
            return nums[i];
    }
         return -1;
}