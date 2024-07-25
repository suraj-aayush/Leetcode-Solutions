class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums)
        mp[x]++;

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
int i=0;
        for(int num = mini; num<=maxi; num++)
        {
            while(mp[num] > 0)
            {
                nums[i] = num;
                i++;
                mp[num]--;
            }
        }
        return nums;
    }
};
