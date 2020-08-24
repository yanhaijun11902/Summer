int maxProduct(int* nums, int numsSize)
{
    int i,j,t;
       for(i=0;i<numsSize;i++)
       {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[j]>nums[i])
            {
                t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
            }
        }
       }
    return (nums[0]-1)*(nums[1]-1);
}/*
����һ���������� nums������ѡ�������������ͬ�±� i �� j��ʹ (nums[i]-1)*(nums[j]-1) ȡ�����ֵ��

������㲢���ظ�ʽ�����ֵ��

?

ʾ�� 1��

���룺nums = [3,4,5,2]
�����12 
���ͣ����ѡ���±� i=1 �� j=2���±�� 0 ��ʼ��������Ի�����ֵ��(nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12 �� 
ʾ�� 2��

���룺nums = [1,5,4,5]
�����16
���ͣ�ѡ���±� i=1 �� j=3���±�� 0 ��ʼ��������Ի�����ֵ (5-1)*(5-1) = 16 ��
ʾ�� 3��

���룺nums = [3,7]
�����12

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/maximum-product-of-two-elements-in-an-array
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/