
/*����һ���ַ���?s?���ַ����ġ�����������Ϊ��ֻ����һ���ַ�����ǿ����ַ����ĳ��ȡ�

���㷵���ַ�����������

?

ʾ�� 1��

���룺s = "leetcode"
�����2
���ͣ����ַ��� "ee" ����Ϊ 2 ��ֻ�����ַ� 'e' ��
ʾ�� 2��

���룺s = "abbcccddddeeeeedcba"
�����5
���ͣ����ַ��� "eeeee" ����Ϊ 5 ��ֻ�����ַ� 'e' ��
ʾ�� 3��

���룺s = "triplepillooooow"
�����5
ʾ�� 4��

���룺s = "hooraaaaaaaaaaay"
�����11
ʾ�� 5��

���룺s = "tourist"
�����1

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/consecutive-characters
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/int maxPower(char * s)
{
    int lenth=strlen(s);
    int i;
    int count=0;
    int maxPower=0;
    for(i=0;i<lenth;i++)
    {
       if(s[i]==s[i+1])
       {
           count++;
           if(count>maxPower)
           {
              maxPower=count;
           }
       }
       else
       {
       count=0;
       }
    }
    return maxPower+1;
}