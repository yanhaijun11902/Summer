int findRepeatNumber(int* nums, int numsSize)
{
    int i;
    int *nums2= calloc(numsSize/*���鳤��*/,sizeof(int)/*����ÿ��Ԫ����ռ�Ŀռ��С*/);//calloc����ռ��������ÿ����Ϊ0
    for(i=0;i<numsSize;i++)
    {
        if(nums2[nums[i]]==0)
            nums2[nums[i]]=1;
        else
            return nums[i];
    }
         return -1;
}