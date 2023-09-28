class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int mx=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>=mx)
            mx=arr[i];
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==mx)
            return i;
        }
        return -1;
    }
};
