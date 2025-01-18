class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        vector<int> v1, v2;
        if(n!=m)
        return false;

        map<char,int> m1, m2;
        for(auto x: word1)
        m1[x]++;

        for(auto x:word2)
        m2[x]++;

 for(auto x: word1)
 {
     if( !m2[x] )
     {
         return false;
     }
 }
        for(auto x:m1)
        v1.push_back(x.second);

        for(auto x:m2)
        v2.push_back(x.second);

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        if(v1==v2)
        return true;


        return false;
    }
};
