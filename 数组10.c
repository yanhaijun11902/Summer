/*我们把只包含质因子 2、3 和 5 的数称作丑数（Ugly Number）。求按从小到大的顺序的第 n 个丑数。

?

示例:

输入: n = 10
输出: 12
解释: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 是前 10 个丑数。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/chou-shu-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
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