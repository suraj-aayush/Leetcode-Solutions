class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        int l=0, r=n-1;
        int ans = n;
        while(l<r){
            if(s[l] == s[r])
            {
                while(l<r-1 && s[l]==s[l+1])
                {   
                    l++; 
                    ans--;
                
                }

                while(l+1<r && s[r]==s[r-1])
                {   r--;
                    ans--;
                }

                l++, r--;
                ans-=2;
            }
            else
            break;
        
        }
        // return r-l+1;
        return ans;
    }
};
