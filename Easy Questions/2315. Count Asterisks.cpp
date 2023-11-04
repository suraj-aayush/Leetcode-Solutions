2315. Count Asterisks
class Solution {
public:
    int countAsterisks(string s) {
int ans = 0;
        int brace = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|' && brace!=1) brace=1;
            else if(s[i]=='*' && brace!=1) ans++;
            else if(s[i]=='|' && brace==1) brace=0;
        }
        return ans;
        // int c=0;
        // int ans=0;
        // for(int i=1;i<s.length();i++)
        // {
        //     if(s[i]=='*' && s[i-1]=='*')
        //     {
        //         c++;
        //         ans = max(ans,c);
        //     }
        // }
        // return ans;
    }
};
