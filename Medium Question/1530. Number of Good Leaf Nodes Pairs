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
int pairs;
vector<int>dfs(TreeNode*root, int &dist)
{
    if(root == NULL) return {};
    if(root->left==NULL && root->right==NULL) return {1};

    vector<int> leftv = dfs(root->left, dist);
    vector<int> rightv = dfs(root->right, dist);

    for(auto lv:leftv)
    {
        for(auto rv:rightv)
        {
            if(lv+rv <= dist) pairs++;
        }
    }

    vector<int>parentv;
    for(auto lv:leftv)
    {
        if(lv+1 <= dist) parentv.push_back(lv+1);
    }
    for(auto rv:rightv)
    {
        if(rv+1 <= dist) parentv.push_back(rv+1);
    }

    return parentv;
}

    int countPairs(TreeNode* root, int distance) {
        pairs=0;
        dfs(root, distance);

        return pairs;
    }
};
