class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
       int ans = 0;
    int n = word.length();
    int i = 1;

    while (i < n) {
        if (word[i] == word[i - 1] || abs(static_cast<int>(word[i]) - static_cast<int>(word[i - 1])) == 1) {
            ans++;
            i += 2;
        } else {
            i += 1;
        }
    }

    return ans;
    }
};
