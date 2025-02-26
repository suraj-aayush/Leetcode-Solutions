class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();

// using Kadane's algo, find the maxm of abs of sum
// short code, find both minSubArraySum and maxSubArrsySum
        int curMax = nums[0], curMini = nums[0], maxi = nums[0], mini = nums[0];
        for(int i=1;i<n;i++)
        {
            curMax = max(nums[i], curMax + nums[i]);
            maxi = max(curMax, maxi);

            curMini = min(nums[i], curMini + nums[i]);
            mini = min(curMini, mini);
        }  
        return max(abs(mini), abs(maxi));
    }
};
