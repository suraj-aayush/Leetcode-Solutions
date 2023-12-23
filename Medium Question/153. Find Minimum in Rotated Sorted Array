class Solution {
public:
    int findMin(vector<int>& nums) {
         int low = 0;
        int high = nums.size()-1;
        while(high - low > 1)
        {
            int middle = (high + low)/2;
            if(nums[middle] < nums[high])
                high = middle;
            else
                low = middle;
        }
        return min(nums[low], nums[high]);
    }
};
