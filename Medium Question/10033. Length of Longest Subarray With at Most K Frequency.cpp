class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
         
        int n = nums.size();
        unordered_map<int,int> ump;
        int i = 0;
        int j = 0;
        int ans = 0;
        while(j < n)
        {
            ump[nums[j]]++;
            if(ump[nums[j]] > k)
            {
                while(i<j and ump[nums[j]] > k)
                {
                    if(ump[nums[i]] == 1)
                        ump.erase(nums[i]);
                    else
                        ump[nums[i]]--;
                    i++;
                }
            }
            ans = max(ans, j-i+1);
            
            j++;
        }
        
        return ans;   
    }
};
