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
    ListNode* swapNodes(ListNode* head, int k) {
        int first=0;
        int last=0;
        int l=0;
        for(ListNode *p=head; p; p=p->next)
        {
            l++;
        }
        ListNode*p=head;
        for(int i=0;i<k-1;i++)
        {
            p=p->next;
        }
        first=p->val;
        cout<<first<<" ";
        int x=l-k;
        p=head;
        for(int i=0;i<x;i++)
        {
            p=p->next;
        }
        last = p->val; cout<<last;
        p=head;
for(int i=0;i<k-1;i++)
        {
            p=p->next;
        }
        p->val = last;
p=head;
for(int i=0;i<x;i++)
        {
            p=p->next;
        }
        p->val = first;
        return head;
    }
};
