
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans=0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++)
        {
            ans = max(ans, nums[i] + nums[n-i-1]);
        }

        return ans;
    }
};
