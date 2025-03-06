class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
// APPROACH -> TAKE TRANSPOSE AND ROTATE EACH ROW
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
// HAVE A LOOK AT TRANSPOSED MATRIX
        for(auto x: matrix)
        {
            for(auto y:x)
            {
                cout<<y<<" ";
            }
            cout<<endl;
        }
// NOW REVERSE THE ROWS

    for(int i=0;i<n;i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    }
};



