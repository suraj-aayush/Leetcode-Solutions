/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode *turn(ListNode *head)
{
    ListNode *p=head;
    while(p->next!=NULL)
    {
      p=p->next;
    }
    int last = p->val;
    int temp=head->val;
    p=head;
    int nextTemp;
    while(p->next!=NULL)
    {
        nextTemp = p->next->val;
        p->next->val = temp;
        temp=nextTemp;

        p=p->next;
    }

    head->val = last;

return head;
}
    ListNode* rotateRight(ListNode* head, int k) {
      if(head==NULL || head->next ==NULL)
      return head;
      int len=0;
      ListNode*p=head;
      while(p!=NULL)
      {
        len++;
        p=p->next;
      }
      if(k>=len)
        {
          for(int i=0;i<k%len;i++)
          head = turn(head);
        }
        else
        {
          for(int i=0;i<k;i++)
          head = turn(head);
        }

        return head;
    }
};
