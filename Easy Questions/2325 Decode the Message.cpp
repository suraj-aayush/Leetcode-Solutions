class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> m;
        char ch='a';
        string ans="";
        for(auto &c: key)
        {
            if(c==' ')
            continue;

            if(!m.count(c))
            {
                m[c] = ch++;
                
            }
        }

         for(int i = 0 ; i < message.size(); i++)
        {
            if(message[i] == ' ')
            {
                ans += ' ';
            }
            else
            {
                ans += m[message[i]];
            }
            
        }
       return ans;
    }
};
