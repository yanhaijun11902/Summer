/**
����һ������ nums �����顸��̬�͡��ļ��㹫ʽΪ��runningSum[i] = sum(nums[0]��nums[i]) ��

�뷵�� nums �Ķ�̬�͡�

?

ʾ�� 1��

���룺nums = [1,2,3,4]
�����[1,3,6,10]
���ͣ���̬�ͼ������Ϊ [1, 1+2, 1+2+3, 1+2+3+4] ��
ʾ�� 2��

���룺nums = [1,1,1,1,1]
�����[1,2,3,4,5]
���ͣ���̬�ͼ������Ϊ [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1] ��
ʾ�� 3��

���룺nums = [3,1,2,10,1]
�����[3,4,6,16,17]

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/running-sum-of-1d-array
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize)
{
    int *sum=(int*)malloc(sizeof(int)*numsSize);
    int i;
    sum[0]=nums[0];
    for(i=1;i<numsSize;i++)
    {
        sum[i]=sum[i-1]+nums[i];
    }
    *returnSize=numsSize;
    return sum;

}