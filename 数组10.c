/*���ǰ�ֻ���������� 2��3 �� 5 ��������������Ugly Number�����󰴴�С�����˳��ĵ� n ��������

?

ʾ��:

����: n = 10
���: 12
����: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 ��ǰ 10 ��������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/chou-shu-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/
#define MIN(a,b) a>b?b:a
int nthUglyNumber(int n)
{
    int *ugly=(int*)malloc(sizeof(int)*n);
    int *a=(int*)malloc(sizeof(int)*n);
    ugly[0]=1;
    int i=0,j=0,k=0,m;
    for(m=1;m<n;m++)
    {
        a[m]=MIN(ugly[j]*3,ugly[k]*5);
        ugly[m]=MIN(a[m],ugly[i]*2);
        if(ugly[m]==ugly[i]*2)
        i++;
        if(ugly[m]==ugly[j]*3)
        j++;
        if(ugly[m]==ugly[k]*5)
        k++; 
    }
    return ugly[n-1];
}