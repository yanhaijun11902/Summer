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
/*����һ���������飬�����е�һ������������������һ�������顣������������ĺ͵����ֵ��

Ҫ��ʱ�临�Ӷ�ΪO(n)*/
