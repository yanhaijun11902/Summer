/**��n���������ڵ��ϣ��������ӳ���һ��ĵ���֮��Ϊs������n����ӡ��s�����п��ܵ�ֵ���ֵĸ��ʡ�

?

����Ҫ��һ�����������鷵�ش𰸣����е� i ��Ԫ�ش����� n ���������������ĵ��������е� i С���Ǹ��ĸ��ʡ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/nge-tou-zi-de-dian-shu-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* twoSum(int n, int* returnSize)
{
    *returnSize=5*n+1;
    int i,j,k,total;
    int s[100][100]={0};
    double *out=(double*)malloc(sizeof(double)*(5*n+1));
    total=pow(6,n);
    for(i=1;i<=6;i++)
    {
        s[1][i]=1;
    }
    for(i=2;i<=n;i++)
    {
        for(j=i;j<=6*n;j++)
        {
            for(k=1;k<=6;k++)
            {
                if(j<k)
                {
                break;
                }
                s[i][j]=s[i][j]+s[i-1][j-k];
            }
        }
    }
    for(i=n;i<=6*n;i++)
    {
        out[i-n]=s[n][i]*1.0/total;
    }
    return out;
}