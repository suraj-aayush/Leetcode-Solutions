/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool solve(TreeNode* &root, int startValue, int destValue, TreeNode* &lca) {

        if(root == NULL) return false;

        bool left = solve(root->left, startValue, destValue, lca);

        bool right = solve(root->right, startValue, destValue, lca);

        if(root->val == startValue) {

            if(left || right) {

                lca = root;
            }

            return true;

        }

        if(root->val == destValue) {
            
            if(left || right) lca = root;

            return true;
        }


        if(left && right) {

            lca = root;

            return true;
        }

        if(left || right) return true;

        return false;

    }

    void solve2(TreeNode* &root, string &str1, string &path, int dest) {

        if(root->val == dest) {

            str1 = path;

            return;
        }

        path += 'L';

        if(root->left) solve2(root->left, str1, path, dest);

        path.pop_back();

        path += 'R';

        if(root->right) solve2(root->right, str1, path, dest);

        path.pop_back();
    }
    
    string getDirections(TreeNode* root, int startValue, int destValue) {

        TreeNode* lca = NULL;
        
        solve(root, startValue, destValue, lca);

        string str1= "";

        string str2 = "";

        string path = "";

        solve2(lca, str1, path, destValue);

        if(lca->val == startValue) return str1;

        path = "";

        solve2(lca, str2, path, startValue);

        for(int i = 0; i < str2.length(); i++) {

            str2[i] = 'U';
        }

        if(lca->val == destValue) {

            return str2;
        }

        string ans = str2 + str1;

        return ans;
    }
};
