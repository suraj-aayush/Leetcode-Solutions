
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v;
        for(int i=0;i<arr2.size();i++)
        {
            for(int j=0;j<arr1.size();j++)
            {
                if(arr2[i]==arr1[j])
                    v.push_back(arr2[i]);
            }
        }
         map<int ,int> m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        vector<int> s;
        for(int i=0;i<arr1.size();i++)
        {
            if(!m.count(arr1[i]))
                s.push_back(arr1[i]);
        }
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
            v.push_back(s[i]);
            
        return v;
    }
};
