class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
      for(auto x:word)
        {
            freq[x-'a']++;
        }
     int press=0;
    sort(freq.rbegin(), freq.rend());
    for(int i=0;i<26;i++)
    {
        if(freq[i] == 0)
        break;

        press += (i/8 + 1) * freq[i];
    }

        return press;
      
      
    }
};
