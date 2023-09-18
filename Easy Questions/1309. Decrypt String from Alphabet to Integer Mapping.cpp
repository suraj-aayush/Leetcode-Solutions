class Solution {
public:
    string freqAlphabets(string s)
    {
        map<int,char> mp;
        char ch='a';
        string ans="";
        for(int i=1;i<=26;i++)
        {
            mp[i]=ch;
              ch++;
        }
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='#')
            {
                int n=(s[i-2]-'0')*10+s[i-1]-'0';
                ans=ans+mp[n];
                i=i-2;
            }
            else
            {
                int n=s[i]-'0';
                ans=ans+mp[n];
            }
            
        }reverse(ans.begin(),ans.end());
        return ans;
    }
};
