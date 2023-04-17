
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int count=0;
        vector<pair<int,int>> v;
        vector<int> ans;
        int index=0;
        for(auto x: mat)
        {
            
            for( auto c: x)
            {
                if(c==1)
                count++;
            }
            v.push_back(make_pair(count,index));
            count=0;

            index++;
        }

        sort(v.begin(),v.end());
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
