/*ʵ��һ���㷨��ȷ��һ���ַ��� s �������ַ��Ƿ�ȫ����ͬ��

ʾ�� 1��

����: s = "leetcode"
���: false 
ʾ�� 2��

����: s = "abc"
���: true

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/is-unique-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/
bool isUnique(char* astr)
{
    int lenth=strlen(astr);
    int count[128]={0};
    int i;
        for(i=0;i<lenth;i++)
        {
            count[astr[i]]++;    
        }
        for(i=0;i<lenth;i++)
        {
            if(count[astr[i]]!=1)
            {
            return false;
            }
        }
            return true;
}