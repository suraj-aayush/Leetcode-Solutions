class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        if(n==1)
        return pref;

        vector<int> ans(n,0);
        ans[0]=pref[0];
        for(int i=1; i<pref.size(); i++)
        {
            ans[i] = pref[i] ^ pref[i-1];
        }       
        return ans;
    }
};
