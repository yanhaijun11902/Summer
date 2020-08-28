#include<stdio.h>
#include<malloc.h>
struct ListNode 
{
    int val;
    struct ListNode *next;
};
struct ListNode *list();
void display(struct ListNode *head);
int main()
{
	struct ListNode *head,*p;
	int val;
	head=list();
	display(head);
	return 0;
}
struct ListNode *list()
{
	struct ListNode *head,*tail,*p;
	int val;
	head=tail=NULL;
	scanf("%d",&val);
	while(val!=0)
	{
		p=(struct ListNode*)malloc(sizeof(struct ListNode));
		p->val=val;
		p->next=NULL;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			tail->next=p;
		}
		tail=p;
		scanf("%d",&val);
	}
	return head;
}
void display(struct ListNode *head)
{
	struct ListNode *p;
	if(head==NULL)
	{
		printf("nothing\n");
		return ;
	}
	for(p=head;p!=NULL;p=p->next)
	printf("%d\n",p->val);
}

