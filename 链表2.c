/*给定单向链表的头指针和一个要删除的节点的值，定义一个函数删除该节点。

返回删除后的链表的头节点。

注意：此题对比原题有改动

示例 1:

输入: head = [4,5,1,9], val = 5
输出: [4,1,9]
解释: 给定你链表中值为?5?的第二个节点，那么在调用了你的函数之后，该链表应变为 4 -> 1 -> 9.
示例 2:

输入: head = [4,5,1,9], val = 1
输出: [4,5,9]
解释: 给定你链表中值为?1?的第三个节点，那么在调用了你的函数之后，该链表应变为 4 -> 5 -> 9.
?

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/shan-chu-lian-biao-de-jie-dian-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
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