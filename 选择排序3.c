/*����һ���������� arr ��

���һ�������У�������������Ĳ��ܵ���ͬһ����������ô������оͳ�Ϊ �Ȳ����� ��

��������������������γɵȲ����У��뷵�� true �����򣬷��� false ��

?

ʾ�� 1��

���룺arr = [3,5,1]
�����true
���ͣ���������������õ� [1,3,5] ���� [5,3,1] ��������������Ĳ�ֱ�Ϊ 2 �� -2 �������γɵȲ����С�
ʾ�� 2��

���룺arr = [1,2,4]
�����false
���ͣ��޷�ͨ����������õ��Ȳ����С�
?

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/can-make-arithmetic-progression-from-sequence
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/
bool canMakeArithmeticProgression(int* arr, int arrSize){
    int i,j;
    double t;
       for(i=0;i<arrSize;i++)
    {
        for(j=i+1;j<arrSize;j++)
        {
            if(arr[j]<arr[i])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(i=1;i<arrSize-1;i++)
    {
        if(2*arr[i]!=arr[i-1]+arr[i+1])
        return false;
    }
    return true;

}