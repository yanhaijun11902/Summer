/*�������������ͷָ���һ��Ҫɾ���Ľڵ��ֵ������һ������ɾ���ýڵ㡣

����ɾ����������ͷ�ڵ㡣

ע�⣺����Ա�ԭ���иĶ�

ʾ�� 1:

����: head = [4,5,1,9], val = 5
���: [4,1,9]
����: ������������ֵΪ?5?�ĵڶ����ڵ㣬��ô�ڵ�������ĺ���֮�󣬸�����Ӧ��Ϊ 4 -> 1 -> 9.
ʾ�� 2:

����: head = [4,5,1,9], val = 1
���: [4,5,9]
����: ������������ֵΪ?1?�ĵ������ڵ㣬��ô�ڵ�������ĺ���֮�󣬸�����Ӧ��Ϊ 4 -> 5 -> 9.
?

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/shan-chu-lian-biao-de-jie-dian-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteNode(struct ListNode* head, int val){
    if(head==NULL)
    {
        return NULL;
    }
    if(head->val==val)
    {
        return head->next;
    }
    struct ListNode *flag=head;

    while(flag->next!=NULL&&flag->next->val!=val)
    {
        flag=flag->next;
    }
    if(flag->next!=NULL)
    {
        flag->next=flag->next->next;
    }
    return head;
}