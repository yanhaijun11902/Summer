/*��ָ Offer 50. ��һ��ֻ����һ�ε��ַ�
���ַ��� s ���ҳ���һ��ֻ����һ�ε��ַ������û�У�����һ�����ո� s ֻ����Сд��ĸ��

ʾ��:

s = "abaccdeff"
���� "b"

s = "" 
���� " "
 */char firstUniqChar(char* s){
   int asc[128]={0};
   int i;
   for(i=0;s[i]!='\0';i++)
   {
       asc[s[i]]++;
   }
   for(i=0;s[i]!='\0';i++)
   {
       if(asc[s[i]]==1)
       return s[i];
   }
   return ' ';


}