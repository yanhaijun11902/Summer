/*ʵ�ֺ��� ToLowerCase()���ú�������һ���ַ������� str���������ַ����еĴ�д��ĸת����Сд��ĸ��֮�󷵻��µ��ַ�����

?

ʾ�� 1��

����: "Hello"
���: "hello"
ʾ�� 2��

����: "here"
���: "here"
ʾ��?3��

����: "LOVELY"
���: "lovely"

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/to-lower-case
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/
char * toLowerCase(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='A'&&str[i]<='Z')
        str[i]=str[i]+32;
        i++;
    }
    return str;
}