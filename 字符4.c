/*
给你一个字符串 s 和一个 长度相同 的整数数组 indices 。

请你重新排列字符串 s ，其中第 i 个字符需要移动到 indices[i] 指示的位置。

返回重新排列后的字符串。

 

示例 1：



输入：s = "codeleet", indices = [4,5,6,7,0,2,1,3]
输出："leetcode"
解释：如图所示，"codeleet" 重新排列后变为 "leetcode" 。*/char * restoreString(char * s, int* indices, int indicesSize)
{
    int i;
    char *sort=(char*)malloc(sizeof(char)*(indicesSize+1));
    for(i=0;i<indicesSize;i++)
    {
        sort[indices[i]]=s[i];
    }
    sort[i]='\0';
    return sort; 
}