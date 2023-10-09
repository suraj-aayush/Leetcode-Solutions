class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int  ans = 0;
        for(auto &x:words){
            int n = x.size();
            if(s.substr(0,n)==x)
            ans++;
        }

        return ans;
    }
};
