// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int> ans;
//         int n=nums.size();
//         int digit = 1;
//         int index=0;
//         vector<int>indices;
//         for(int i=0;i<n;i++)
//         {
//             digit*=nums[i];
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]!=0)
//             ans.push_back(digit/nums[i]);
//         }

//         return ans;
//     }
// };
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        //pre-compute suffix products
        ans[n-1] = 1;
        for(int i=n-2; i>=0; i--) {
            ans[i] = ans[i+1] * nums[i+1];
        }
        //pr-compute prefix products;
        int prefix =1;
        for(int i=1; i<n; i++) {
            prefix = prefix * nums[i-1];
            ans[i] = prefix * ans[i];
        }
        return ans;
    }
};
