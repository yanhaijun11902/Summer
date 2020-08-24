
/*����һ��?n?��Ԫ������ģ�������������?nums ��һ��Ŀ��ֵ?target ?��дһ����������?nums?�е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1��


ʾ�� 1:

����: nums = [-1,0,3,5,9,12], target = 9
���: 4
����: 9 ������ nums �в����±�Ϊ 4
ʾ��?2:

����: nums = [-1,0,3,5,9,12], target = 2
���: -1
����: 2 ������ nums ����˷��� -1
?

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/binary-search
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/
int search(int* nums, int numsSize, int target)
{
  int low=0,high=numsSize-1;
  int mid,i,j;
  while(low<=high)
  {
      mid=(low+high)/2;
      if(nums[mid]==target)
      break;
      else if(nums[mid]<target)
      low=mid+1;
      else
      high=mid-1;
  }
    if(low<=high)
     return mid;
    else
     return -1;
}