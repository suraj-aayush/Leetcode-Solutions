class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int tMax = 0; // Tracks the maximum time for all oranges to rot
        vector<vector<int>> vis(n, vector<int>(m, 0)); // Visited array
        queue<vector<int>> q; // Queue to perform BFS {row, col, time}
        
        // Initialize the queue with all initially rotten oranges
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j, 0});
                    vis[i][j] = 1; // Mark as visited
                }
            }
        }
        
        // Directions for up, right, down, left
        int dRow[] = {-1, 0, 1, 0};
        int dCol[] = {0, 1, 0, -1};
        
        // BFS traversal
        while (!q.empty()) {
            int r = q.front()[0];
            int c = q.front()[1];
            int time = q.front()[2];
            tMax = max(tMax, time);
            q.pop();
            
            for (int d = 0; d < 4; d++) {
                int nrow = r + dRow[d];
                int ncol = c + dCol[d];
                
                // Check boundaries and if the orange can be rotten
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    !vis[nrow][ncol] && grid[nrow][ncol] == 1) 
                {

                    q.push({nrow, ncol, time + 1});
                    vis[nrow][ncol] = 1; // Mark as visited
                    grid[nrow][ncol] = 2; // Turn fresh orange to rotten
                }
            }
        }
        
        // Check if there are any fresh oranges left
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    return -1; // Not all oranges can be rotten
                }
            }
        }
        
        return tMax; // Return the maximum time
    }
};


// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         int c=0;
//         int tMax=0;
//         vector<vector<int>>vis(n, vector<int>(m,0));
//         queue<vector<int>>q; // {row, col, time}
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(grid[i][j] == 2)
//                 {
//                     q.push({i, j, 0});
//                     vis[i][j] = 2; // mark visited.. by 2.. any value can go
//                 }
//                 else
//                 vis[i][j]=0;
//             }
//         }
// int dRow[] = {-1, 0, 1, 0};
// int dCol[] = {0, 1, 0, -1};
//         while(!q.empty())
//         {
//             int r = q.front()[0];
//             int c = q.front()[1];
//             int time = q.front()[2];
//             tMax = max(time, tMax);
//             q.pop();

//             for(int d=0;d<4;d++)
//             {
//                 int nrow = r + dRow[d];
//                 int ncol = c + dCol[d];

// if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol] !=2 && grid[nrow][ncol]==1)
//                 {
//                     q.push({nrow, ncol, time+1});
//                     vis[nrow][ncol] = 2;
//                 }

//             }
//         }

// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<m;j++)
//     {
//         if(vis[i][j] != 2 && grid[i][j] == 1)
//         return -1;
//     }
// }

//         return tMax;
//     }
// };
