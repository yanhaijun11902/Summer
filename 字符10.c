/*一个长度为n-1的递增排序数组中的所有数字都是唯一的，并且每个数字都在范围0～n-1之内。在范围0～n-1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。

?

示例 1:

输入: [0,1,3]
输出: 2
示例?2:

输入: [0,1,2,3,4,5,6,7,9]
输出: 8
?

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/int missingNumber(int* nums, int numsSize){
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