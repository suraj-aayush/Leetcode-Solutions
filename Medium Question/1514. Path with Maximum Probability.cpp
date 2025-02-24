class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        unordered_map<int, vector<pair<int,double>>>adj;
        vector<double>result(n,0); 
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            double prob = succProb[i];

            adj[u].push_back({v, prob});
            adj[v].push_back({u, prob});
        }
        priority_queue<pair<double,int>>pq;
        
        result[start] = 1;  // prob to reach start is 100%

        pq.push({1.0, start});

        while(!pq.empty())
        {
            int curNode = pq.top().second;
            double curProb = pq.top().first;
            pq.pop();

            for(auto &temp: adj[curNode])
            {
                double adjProb = temp.second;
                int adjNode = temp.first;
                if(result[adjNode] < curProb * adjProb)
                {
                    result[adjNode] = curProb*adjProb;
                    pq.push({result[adjNode], adjNode});
                } 
            }
        }
        return result[end];
    }
};
