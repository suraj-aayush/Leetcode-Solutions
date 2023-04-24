class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n= mat.size();
        for(int i=0;i<mat.size();i++)
        {
            sum+=mat[i][i]; // 00 , 11 , 22,,,etc ka sum
        }

        for( int i=0, j=n-1; i<n, j>=0; i++, j-- )
        {
            sum += mat[i][j];  // 02, 11, 20
        }

       if(n%2==0)
       return sum;

        else
        {
            sum = sum - mat[n/2][n/2];
        }
        return sum;

    }
};
