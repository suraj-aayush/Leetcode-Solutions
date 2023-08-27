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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *p=head->next;
        vector<int> v;
         int sum=0;
        while(p!=NULL)
        {
            sum+=p->val;
            if(p->val==0)
            {
                 v.push_back(sum);
                  sum=0;
            }
            p=p->next;
        }

ListNode *newhead = new ListNode(-1);
ListNode *dummyhead = newhead;
 for(auto it:v)
        {
            ListNode* t=new ListNode();
            t->val=it;
            t->next=NULL;
            dummyhead->next=t;
            dummyhead=t;
        }

return newhead->next;


    }
};
