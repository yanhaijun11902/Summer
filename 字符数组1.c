#include <stdio.h>
int main()
{
	int i=0,j=0,t;
	char row[100]; 
	printf("输入字符：\n");
	t=getchar();
	char ch=(char)t;
	while((row[j]=getchar())!='\n')
	{
		j++;
	 } 
	 row[j]='\0';
	 j=j-1;
	 while(i<j/2)
	 {
	 	if(row[i]!=row[j])
	 	break;
	 	i++;
	 	j--;
	  } 
	  if(i>=j/2)
	  printf("是回文数\n");
	  else
	  printf("不是回文数\n"); 
	return 0;
}
