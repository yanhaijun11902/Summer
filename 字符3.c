
/*����һ���ǿյ��ַ������ж����Ƿ����������һ���Ӵ��ظ���ι��ɡ��������ַ���ֻ����СдӢ����ĸ�����ҳ��Ȳ�����10000��

ʾ�� 1:

����: "abab"

���: True

����: �������ַ��� "ab" �ظ����ι��ɡ�
ʾ�� 2:

����: "aba"

���: False
ʾ�� 3:

����: "abcabcabcabc"

���: True

����: �������ַ��� "abc" �ظ��Ĵι��ɡ� (�������ַ��� "abcabc" �ظ����ι��ɡ�)

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/repeated-substring-pattern
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/
bool repeatedSubstringPattern(char * s)
{
int lenth=strlen(s);
int i,j;
for(i=1;i<=lenth/2;i++)
{
    if(lenth%i!=0)
    continue;
    for(j=0;j<lenth;j++)
    {
        if(s[j]!=s[j%i])
         break;
    }
    if(j==lenth)
    return true;
}
return false;
}