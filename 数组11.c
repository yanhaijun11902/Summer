/*ͳ��һ�����������������г��ֵĴ�����

?

ʾ�� 1:

����: nums = [5,7,7,8,8,10], target = 8
���: 2
ʾ��?2:

����: nums = [5,7,7,8,8,10], target = 6
���: 0
?

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/
int search(int* nums, int numsSize, int target)
{
    int i,count=0;
    for(i=0;i<numsSize;i++)
    {
     if(nums[i]==target)
     count++;
    }
    return count;
}