/*һ������Ϊn-1�ĵ������������е��������ֶ���Ψһ�ģ�����ÿ�����ֶ��ڷ�Χ0��n-1֮�ڡ��ڷ�Χ0��n-1�ڵ�n������������ֻ��һ�����ֲ��ڸ������У����ҳ�������֡�

?

ʾ�� 1:

����: [0,1,3]
���: 2
ʾ��?2:

����: [0,1,2,3,4,5,6,7,9]
���: 8
?

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/int missingNumber(int* nums, int numsSize){
    int i;
    for(i=0;i<numsSize-1;i++)
    {
        if(nums[i+1]-nums[i]==2)
        return nums[i]+1;
    }
    if(nums[0]==0)
    return numsSize;
    else
    return 0;

}