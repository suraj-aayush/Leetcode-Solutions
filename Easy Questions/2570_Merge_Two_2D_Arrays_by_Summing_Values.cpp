class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> m;
        vector<vector<int>> ans;
        for(auto x:nums1)
        m[x[0]] = x[1];

        for(auto y:nums2)
        {
            if(m.find(y[0]) != m.end())
            {
//  If the key exists in the map, it increments 
//  the value associated with that key
                m[y[0]] = y[1] + m[y[0]];
            }
//  If the key does not exist, it adds a new key-value pair to the map
//  with key y[0] and value y[1] 
            else
            m[y[0]] = y[1];
        }

        for(auto n:m)
        {
            vector<int> temp={n.first, n.second};
            ans.push_back(temp);
        }

        return ans;
    }
};
