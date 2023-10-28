class Solution {
public:
int kadane(vector<int> arr)
{
    // if(arr.size()==1)
    // return arr[0];

//     int sum=arr[0];
//     int maxSum = INT_MIN;
//     for(int i=1;i<arr.size();i++)
//     {
//         sum+=arr[i];
//         if(sum<0)
//         sum=0;

//          maxSum = max(maxSum, sum);
//     }
// return maxSum;
int maxEnding=arr[0], res=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        maxEnding=max(arr[i], maxEnding+arr[i]);
        res=max(res, maxEnding);
    }
    return res;
}

    int maxSubarraySumCircular(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
int nonWrapSum = kadane(nums);   // maxNormal
if(nonWrapSum < 0)
return nonWrapSum;
        vector<int> arr=nums;
        int totalSum = 0;
        for(auto &x:arr)
       {
           totalSum +=x;
            x = -x;
       }
int wrapSum = kadane(arr) + totalSum;
cout<<nonWrapSum << " " << wrapSum;
// if(wrapSum==0)
// return nonWrapSum;
return max(nonWrapSum, wrapSum);
    }
};
