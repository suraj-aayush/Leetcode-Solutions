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
    void reorderList(ListNode* head) {
        ListNode *p=head;
        vector<int>v;
        while(p!=NULL)
        {
            v.push_back(p->val);
            p=p->next;
        }
        for(auto x:v)
        cout<<x<<" ";
p=head;
int n = v.size();
        for(int i=0;i<n/2;i++)
        {
            p->val = v[i];
            if(p->next!=NULL)
            {
                p=p->next;
                p->val = v[n-i-1];
            }
            p=p->next;
        }
        if(n%2!=0)
        {
            p->val = v[(n/2)];
        }
    }
};





