class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int neg=0;
        long long ans=0;
        int mini = INT_MAX;
        for(auto x:matrix)
        {
            for(auto y:x)
            {             
                ans += abs(y);

                if(y<0)
                neg++;

                mini = min (mini, abs(y));
            }
        }
        if(neg%2==0) return ans;

        return ans - 2*mini;
    }
};
