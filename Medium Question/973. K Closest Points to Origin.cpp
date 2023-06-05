
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;
        for(auto x: points)
        {
            int dist = (x[0]*x[0]) + (x[1]*x[1]);
            pq.push({dist,{x[0],x[1]}});
        }

        vector<vector<int>> ans;
        for(int i=0;i<k;i++)
        {
            pair<int,pair<int,int>> temp;
            temp=pq.top();
            ans.push_back({temp.second.first,temp.second.second});
            pq.pop();
        }
        return ans;
        
    }
};
