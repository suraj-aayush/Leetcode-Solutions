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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow=head, *fast = head, *node;
        ListNode * len=head;
        int c=0;
        if(head->next == NULL)
        return NULL;
        while(len!=NULL)
        {
            c++;
            len=len->next;
        }
        if(c==0)
        return NULL;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next;
            node = slow;
            slow = slow->next;
            if(fast->next != NULL)
            fast = fast->next;
        }
        node->next = slow->next;

        return head;
    }
};
