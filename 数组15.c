int game(int* guess, int guessSize, int* answer, int answerSize)
{
    int i,count=0;
    for(i=0;i<3;i++)
    {
        if(guess[i]==answer[i])
        count++;
    }
    return count;

}/*
СA �� СB ��������֡�СB ÿ�δ� 1, 2, 3 �����ѡ��һ����СA ÿ��Ҳ�� 1, 2, 3 ��ѡ��һ���¡�����һ���������������Ϸ���뷵�� СA �¶��˼��Σ�

?

�����guess����Ϊ СA ÿ�εĲ²⣬answer����Ϊ СB ÿ�ε�ѡ��guess��answer�ĳ��ȶ�����3��

?

ʾ�� 1��

���룺guess = [1,2,3], answer = [1,2,3]
�����3
���ͣ�СA ÿ�ζ��¶��ˡ�
?

ʾ�� 2��

���룺guess = [2,2,3], answer = [3,2,1]
�����1
���ͣ�СA ֻ�¶��˵ڶ��Ρ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/guess-numbers
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/