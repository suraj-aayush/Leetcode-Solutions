class Solution {
public:

int solve(vector<int> &nums)
{
    int n=nums.size();
    int prev = nums[0];
    int prev2=0;
    for(int i=1;i<n;i++)
    {
        int take = nums[i];
        if(i>1) take += prev2;
        int not_take = prev;

        int cur = max(take, not_take);

        prev2=prev;
        prev=cur;
    }
    return prev;
}

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> t1,t2;
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            t1.push_back(nums[i]);

            if(i!=n-1)
            t2.push_back(nums[i]);
        }

        return max(solve(t1), solve(t2));
    }
};
