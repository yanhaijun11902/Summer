/**
删除链表中等于给定值 val 的所有节点。

示例:

输入: 1->2->6->3->4->5->6, val = 6
输出: 1->2->3->4-
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    while(head!=NULL&&head->val==val)
    {
        head=head->next;;
    }
    struct ListNode *p=head;
    while(p!=NULL)
    {
        if(p->next!=NULL&&p->next->val==val)
        {
            p->next=p->next->next;
        }
       else
       p=p->next;
    }
    return head;

}