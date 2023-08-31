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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
         ListNode* t1 = list1;
        ListNode* t2 = list1;
        for(int i = 0; i < a-1; i++)
        t1 = t1 -> next;

        for(int i = 0; i < b; i++)
        t2 = t2 -> next;

        ListNode* temp = t2 -> next;
        t1 -> next = list2;
        ListNode* t3 = list2;
        
        while(t3 -> next != NULL)
        t3 = t3 -> next;

        t3 -> next = temp;
        // while(p->next->val != a)
        // {
        //     p=p->next;
        // }
        // while(q->val != b)
        // {
        //     q=q->next;
        // }
        // while(r->next!=NULL)
        // r=r->next;

        // p->next = list2;
        // r->next=q->next;

        return list1;
    }
};
