class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> m;
        for(auto x:arr1)
        m[x]++;
vector<int>ans;
    for(int i=0;i<arr2.size();i++)
    {
        if(m.find(arr2[i]) != m.end())
        {
            for(int j=0;j<m[arr2[i]];j++)
            {
                ans.push_back(arr2[i]);
            }
        }
        m.erase(arr2[i]);
    }

    for(auto it:m)
    {
        for(int i=0;i<it.second;i++)
        ans.push_back(it.first);
    }
    
    

    for(auto x:ans)
    cout<<x<<" ";

    return ans;
        
    }
};
