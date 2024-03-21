class Solution {
public:

int dp[10001];
int helper(int n)
{
    if(n==0)
    return 0;

if(dp[n] != -1)
return dp[n];

    int mini = INT_MAX;
    for(int i=1; i*i <= n; i++)
    {
        int result = 1 + helper(n - i*i);
        mini = min(mini, result);
    }

    return dp[n] = mini;
}
    int numSquares(int n) {
        memset(dp, -1, sizeof(dp));
        return helper(n);
    }
};
