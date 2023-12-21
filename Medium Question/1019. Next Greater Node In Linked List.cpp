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
    vector<int> nextLargerNodes(ListNode* head) {
        if(head==NULL)
        return {};
        int l=0;
        for(ListNode*p=head; p; p=p->next)
        l++;
vector<int> ans;

ListNode *p=head;
while(p->next != NULL)
{
    if(p->next!=NULL)
    {
int curr = p->val;
    ListNode *q=p->next;
    int maxi = q->val;

    while(q!=NULL)
    {
        maxi = max(maxi,q->val);
        if(maxi > curr)
        break;
        q=q->next;
    }
    if(maxi > curr)
    ans.push_back(maxi);
    else
    ans.push_back(0);
    }

    p=p->next;
}
ans.push_back(0);
return ans;
    }
};
