class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size()==1)
        return 0;
int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] <= nums[i-1])
            {
            //    int diff = abs(nums[i]-nums[i-1]) + 1;
            //    for(int i=0;i<diff;i++)
            //    {
            //        nums[i]++;
            //        ans++;
            //    }
            ans+= abs(nums[i-1] + 1 -nums[i]);
            nums[i] = nums[i-1] + 1;
            }
            cout<<nums[i]<<" ";
            // else
            // continue;
        }
        return ans;
    }
};
