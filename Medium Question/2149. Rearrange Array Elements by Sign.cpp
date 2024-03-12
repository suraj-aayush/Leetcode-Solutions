class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n =nums.size();
        vector<int> v1, v2;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            v1.push_back(nums[i]);
            if(nums[i]<0)
            v2.push_back(nums[i]);
            
        }
        int l=0;
        int k=1;
        for(int i=0;i<v1.size();i++)
        {
            nums[l]=v1[i];
            nums[k]=v2[i];
            k+=2;
            l+=2;
        }
        return nums;
    }
};
