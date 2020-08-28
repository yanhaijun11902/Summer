/*剑指 Offer 50. 第一个只出现一次的字符
在字符串 s 中找出第一个只出现一次的字符。如果没有，返回一个单空格。 s 只包含小写字母。

示例:

s = "abaccdeff"
返回 "b"

s = "" 
返回 " "
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