class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            if(matrix[0][i] <= target && matrix[m-1][i] >= target )
            {
                int low=0, high = m-1;
                while(low <= high)
                {
                    int mid = low + (high - low)/2;
                    if(matrix[mid][i] == target )
                    return matrix[mid][i];
                    else if(matrix[mid][i] < target)
                    low = mid+1;
                    else
                    high = mid-1;
                }                
            }
        }
        return false;
    }
};
