/**
����һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ����������λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�

?

ʾ����

���룺nums =?[1,2,3,4]
�����[1,3,2,4] 
ע��[3,1,2,4] Ҳ����ȷ�Ĵ�֮һ��
?

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* exchange(int* nums, int numsSize, int* returnSize)
{
     int *a=(int*)malloc(sizeof(int)*numsSize);
     int count1=0,count2,i;
     for(i=0;i<numsSize;i++)
     {
        if(nums[i]%2!=0)
        {
            a[count1]=nums[i];
            count1++;
        }
     }
     count2=count1;
     for(i=0;i<numsSize;i++)
     {
        if(nums[i]%2==0)
        {
            a[count2]=nums[i];
            count2++;
        }
     }
     *returnSize=numsSize;
     return a;
}