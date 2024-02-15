class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        if(nums.size()<3) return -1;
        long long Cursum=0, ans =0;
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] < Cursum)
            ans = Cursum + nums[i];

            Cursum += nums[i];
        }

        return (ans == 0) ? -1 : ans;
    }
};
