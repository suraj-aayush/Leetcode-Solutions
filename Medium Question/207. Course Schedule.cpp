class Solution {
public:

bool dfs(int node, vector<vector<int>>& graph, vector<int>&vis, vector<int>&path)
{
    vis[node] = 1;
    path[node] = 1;

    for(auto it: graph[node])
    {
        if(!vis[it])
        {
            if(dfs(it, graph, vis, path) == true)
            return true;
        }
        else if (path[it] == 1) 
        {
            return true; // Cycle detected
        }
    }
    path[node] = 0;
    return false;
}

    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(n);
        for (auto pre : prerequisites) {
            graph[pre[1]].push_back(pre[0]); // Add edge from pre[1] -> pre[0]
        }
        vector<int>vis(n,0);
        vector<int>path(n,0);

        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if( dfs(i, graph, vis, path) == true )
                return false; // cycle found, therefore not possible to be a topo sort
            }
        }

        return true;
    }
};
