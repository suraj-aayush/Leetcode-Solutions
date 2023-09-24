class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int count = 0;
        unordered_set <char> s;
        
        for(auto x : allowed)
        s.insert(x);

        for(auto word : words)
        {
            bool flag = true;
            for(int i=0; i<word.size(); i++)
            {
                if( s.find(word[i]) == s.end() )
                {
                    flag=false;
                    break;
                }
            }
            
                if(flag)
                count++;
        }
        return count;

    }
};
