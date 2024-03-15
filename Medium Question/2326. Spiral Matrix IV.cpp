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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>arr(m, vector<int>(n,-1));
        ListNode* p=head;

           int row=0;
        int nrow=m-1;
        int col=0;
        int ncol=n-1;
        int size=n*m;
        int c=0;
          while(head != NULL){

            for(int i=row;head != NULL && i<=ncol;i++)
            {
                arr[row][i]=head->val;
                c+=1;
                head=head->next;
            }
            row+=1;

            for(int i=row;head != NULL && i<=nrow;i++)
            {
                arr[i][ncol]=head->val;
                c+=1;
                head=head->next;
            }
            ncol-=1;

            for(int i=ncol;head != NULL && i>=col;i--){
                arr[nrow][i]=head->val;
                c+=1;
                head=head->next;
            }
            nrow-=1;

            for(int i=nrow;head != NULL && i>=row;i--){
                arr[i][col]=head->val;
                c+=1;
                head=head->next;
            }
            col+=1;

        }

        return arr;
    }
};
