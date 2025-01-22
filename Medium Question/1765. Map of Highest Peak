class Solution {
public:

void bfs(int m, int n, vector<vector<int>>&height, 
queue<pair<int,int>>&q)
{

    int dx[] = {0, 0, 1, -1};
    int dy[] = {-1, 1, 0, 0};

    while(!q.empty())
    {
        auto node = q.front();
        q.pop();
        int r = node.first;
        int c = node.second;
    

    for(int i=0;i<4;i++)
    {
        int newRow = r + dx[i];
        int newCol = c + dy[i];

        if (newRow < 0 || newRow >= m || newCol < 0 || newCol >= n ||
         height[newRow][newCol] != -1)         
        {
                    continue;
        }
        else
        {
            height[newRow][newCol] = height[r][c] + 1;
            q.push({newRow, newCol});
        }

    }
    }
};

    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m=isWater.size();
        int n=isWater[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>height(m, vector<int>(n,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isWater[i][j] == 1)
                {
                    height[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
        bfs(m, n, height, q);

        return height;
    }
};
