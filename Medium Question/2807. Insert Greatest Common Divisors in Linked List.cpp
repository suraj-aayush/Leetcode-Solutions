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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *p=head;
        while(p->next != NULL)
        {
            ListNode *newnode = new ListNode(gcd(p->val,p->next->val));
            newnode->next=p->next;
            p->next=newnode;

            p=newnode->next;
        }
        return head;
    }
};
