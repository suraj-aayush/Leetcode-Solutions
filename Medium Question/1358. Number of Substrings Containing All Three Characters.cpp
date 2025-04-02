class Solution {
public:
    int numberOfSubstrings(string s) {
// type 1 using map
unordered_map<char, int> freq;
        int left = 0, count = 0;
        int n = s.size();

        for (int right = 0; right < n; right++) {
            freq[s[right]]++; // Expand the window by including s[right]

            // Shrink the window from the left until it becomes invalid
            while (freq['a'] > 0 && freq['b'] > 0 && freq['c'] > 0) {
                count += (n - right); // All substrings starting from 'left' to 'n' are valid
                freq[s[left]]--; // Remove leftmost element
                left++; // Shrink the window
            }
        }

        return count;


// type 2 code using vector to store frequency

        // int n=s.length();
        // int i=0, j=0;
        // int result=0;
        // vector<int> v(3, 0); // a->0, b->1, c->2
        // while(j<n)
        // {
        //     char ch=s[j];
        //     v[ch-'a']++;

        //     while(v[0]>0 && v[1]>0 && v[2]>0)
        //     {
        //         result += n-j;

        //         v[s[i] - 'a']--;
        //         i++;
        //     }
        //     j++;
        // }

        // return result;
    }
};
