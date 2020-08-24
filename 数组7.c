/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructArr(int* a, int aSize, int* returnSize)
{
       *returnSize=aSize;
        if(0 == aSize ||NULL == a)
        {
        *returnSize = 0;
        return NULL;          
        }
    int i,j;
    int *b=(int*)malloc(sizeof(int)*aSize);
    int *c=(int*)malloc(sizeof(int)*aSize);
    int *d=(int*)malloc(sizeof(int)*aSize);
     for(j=0;j<aSize;j++)
     {
       b[j]=1;
     }
     for(j=0;j<aSize;j++)
     {
       c[j]=1;
     }
    b[0]=1;
    for(j=1;j<aSize;j++)
    {
      b[j]=b[j-1]*a[j-1];
    }
    c[aSize-2]=1;
    for(i=aSize-2;i>=0;i--)
    {
     c[i]=a[i+1]*c[i+1];
    }
    for(i=0;i<aSize;i++)
    {
    d[i]=c[i]*b[i];
    }
    return d;
}
/*给定一个数组 A[0,1,…,n-1]，
请构建一个数组 B[0,1,…,n-1]，
其中 B 中的元素 B[i]=A[0]×A[1]×…×A[i-1]×A[i+1]×…×A[n-1]。不能使用除法。*/
