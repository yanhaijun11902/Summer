/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* reversePrint(struct ListNode* head, int* returnSize)
{
    if(head==NULL)
    {
        *returnSize=0;
        return NULL;
    }
    struct ListNode *p;
    p=head;
    int count=0;
    while(p!=NULL)
    {
        p=p->next;
        count++;
    }
     int i;
     int *back=(int*)malloc(sizeof(int)*count);
     for(i=0;i<count;i++)
     {
         back[count-1-i]=head->val;
         head=head->next;
     }
     *returnSize=count;
     return back;
}

输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

 

示例 1：

输入：head = [1,3,2]
输
