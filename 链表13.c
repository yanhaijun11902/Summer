定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。
示例:
输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL
限制：
0 <= 节点个数 <= 5000
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    if(head==NULL)
    {
        return NULL;
    }
    struct ListNode *cur=head->next;
    head->next=NULL;
    struct ListNode *temp;
    while(cur!=NULL)
    {
        temp=cur->next;
        cur->next=head;
        head=cur;
        cur=temp;
    }
    return head;
}