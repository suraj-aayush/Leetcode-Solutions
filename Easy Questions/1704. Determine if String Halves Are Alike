
class Solution {
public:
    bool halvesAreAlike(string s) {
        // M E T H O D  1
        // int l=0,r=0;
        // for(int i=0;i<s.length()/2;i++)
        // {
        //     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
        //     s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
        //     l++;
        //     cout<<s[i]<<" ";
        // }
        // for(int i=s.length()/2;i<s.length();i++)
        // {
        //     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
        //     s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
        //     r++;
        //     cout<<s[i];
        // }
        // if(l==r)
        // return true;
        // else
        // return false;

         unordered_set<char> set = {'a', 'e', 'i', 'o', 'u','A','I','E','O','U'};
        int i=0,j=s.size()/2,cnt=0;
        while(j<s.size()){
            if(set.find(s[i])!=set.end()) cnt++;
            if(set.find(s[j])!=set.end()) cnt--;
            i++;
            j++;
        }
        return cnt==0;


    }
};

