class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=1,c=0;
        while(i<nums.size())
        {
            if(nums[i] ==nums[i-1])
            {
                i+=2;
                c++;
            }
            else
            i++;
        }
        int left = nums.size() - 2*c;

        return {c,left};

    }
};
