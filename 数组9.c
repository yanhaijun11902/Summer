/**
һ���������� nums �����������֮�⣬�������ֶ����������Ρ���д�����ҳ�������ֻ����һ�ε����֡�Ҫ��ʱ�临�Ӷ���O(n)���ռ临�Ӷ���O(1)
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