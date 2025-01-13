class Solution {
public:
    char findKthBit(int n, int k) {
        vector<string> s(1, "0"); 
        for (int i = 1; i < n; ++i) {
            string t = "";
            for (char ch : s[i-1]) {
                t += (ch == '0') ? '1' : '0';  
            }
            s.push_back(s[i-1] + '1' + string(t.rbegin(), t.rend()));
        }
        return s[n-1][k-1];
    }
};
