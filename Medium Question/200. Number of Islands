class Solution {
public:

bool checkVaildIndex(int i, int j, int n, int m, vector<vector<char>>&grid)
{
    if(i>=0 && i<n && j>=0 && j<m && grid[i][j]=='1')
    return true;

    return false;
}

void solveRecursion(int i, int j, int n, int m, vector<vector<char>>&grid)
{
    grid[i][j]='0';

    if( checkVaildIndex(i,j+1,n,m,grid) )
    solveRecursion(i,j+1,n,m,grid);

    if( checkVaildIndex(i,j-1,n,m,grid) )
    solveRecursion(i,j-1,n,m,grid);

    if( checkVaildIndex(i-1,j,n,m,grid) )
    solveRecursion(i-1,j,n,m,grid);

    if( checkVaildIndex(i+1,j,n,m,grid) )
    solveRecursion(i+1,j,n,m,grid);    

}

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    solveRecursion(i, j, n, m, grid);
                }
            }
        }

        return ans;
    }
};
