class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto x: arr)
        m[x]++;
        unordered_set<int> s;

    //here we insert the elements in a set to avoid duplicate elements
        for(auto it = m.begin(); it!=m.end(); it++){
            s.insert(it->second);
        }
// if size of map is equal to size of set return true
        if(m.size() == s.size()){
            return true;
        }
        return false;

        
    }
};
