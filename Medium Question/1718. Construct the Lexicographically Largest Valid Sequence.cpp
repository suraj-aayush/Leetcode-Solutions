class Solution {
public:

bool solve(int ind, int n, vector<int>&ans, vector<bool>&check)
{
    while( ind < ans.size() && ans[ind] != -1) ind++;

    if(ind == ans.size()) return true;
    
    for(int i=n;i>=1;i--)
    {
        if(check[i] == true) continue;

        if(i==1)
        {
            ans[ind] = 1;
            check[1] = true;

            if(solve(ind+1, n, ans, check) == true) return true;

            ans[ind] = -1;
            check[1] = false;
        }
        else if(ind+i < ans.size() && ans[ind+i] == -1)
        {
            ans[ind] = i;
            ans[ind+i] = i;
            check[i] = true;

            if(solve(ind+1, n, ans, check) == true) return true;

            ans[ind] = -1;
            ans[ind+i] = -1;
            check[i] = false;
        }
    }

    return false;
}

    vector<int> constructDistancedSequence(int n) {
        vector<int>ans(2*n-1, -1);
        vector<bool>check(n+1, false);

        solve(0, n, ans, check);

        return ans;
    }
};
