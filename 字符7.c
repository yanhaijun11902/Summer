/*
����һ���ַ��� s ��һ������ k������Ҫ�Դ��ַ�����ͷ�����ÿ��?2k ���ַ���ǰ k ���ַ����з�ת��

���ʣ���ַ����� k ������ʣ���ַ�ȫ����ת��
���ʣ���ַ�С�� 2k �����ڻ���� k ������תǰ k ���ַ��������ַ�����ԭ����
?

ʾ��:

����: s = "abcdefg", k = 2
���: "bacdfeg"
?

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/reverse-string-ii
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/char * reverseStr(char * s, int k)
{
    int lenth=strlen(s);
    int low,high;
    int i,j=lenth-1;
    char t;
    if(k>lenth)
    {
    for(i=0;i<lenth/2;i++)
    {
       t=s[i];
       s[i]=s[j];
       s[j]=t;
       j--;
    }
    }
    if(lenth>=k)
    {
        for(i=0;i<lenth;i=i+2*k)
        {
        low=i;
        if(i+k-1<lenth)
        high=i+k-1;
        else
        high=lenth-1;
        while(low<high)
        {
        t=s[low];
        s[low]=s[high];
        s[high]=t;
        low++;
        high--;
        }
        }
    }
    return s;

}