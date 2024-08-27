24. Swap Nodes in Pairs


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
        return head;

        ListNode * dummy = new ListNode(-1);
        dummy->next = head;

        ListNode *prev = dummy, *curr = head;

        while(curr!=NULL && curr->next != NULL)
        {
            prev->next = curr->next;
            curr->next = prev->next->next;
            prev->next->next = curr;


            prev = curr;
            curr=curr->next;
        }

return dummy->next;
    }
};
