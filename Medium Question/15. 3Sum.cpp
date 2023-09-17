class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;
            int lo=i+1, hi=n-1;
            while(lo < hi)
            {
                int sum = nums[i] + nums[lo] + nums[hi];
                if(sum<0)
                lo++;
                else if(sum>0)
                hi--;
                else
                {
                    ans.push_back({nums[i],nums[lo],nums[hi]});
                    while(lo<hi && nums[lo]==nums[lo+1]) lo++;
                    while(lo<hi && nums[hi]==nums[hi-1]) hi--;
                    lo++, hi--;
                }
            }
        }
        return ans;
    }
};
