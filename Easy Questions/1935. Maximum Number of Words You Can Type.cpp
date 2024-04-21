class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int brokenLettersIdx [26] = {};
        int canTypeWords = 0;
        for (char c : brokenLetters) {
            brokenLettersIdx[c-'a'] = 1;
        }
		
        for (int i = 0; i < text.length(); i++) {
            int brk = 0;
            while (i < text.length() && text[i] != ' ') {
                if (brokenLettersIdx[text[i]-'a'] == 1) {
                    brk++;
                }
                i++;
            }
            if (brk == 0) {
                canTypeWords++;
            }
        }
        return canTypeWords;
    }
};
