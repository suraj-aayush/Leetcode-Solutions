#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n = num.length();

        // Push digits onto the stack while maintaining the lowest number
        for (int i = 0; i < n; i++) {
            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        // Pop remaining digits if k is still greater than zero
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        // Construct the result string by reversing the stack
        string ans;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        // Reverse the result string to get the correct order of digits
        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        while (ans.length() > 1 && ans[0] == '0') {
            ans.erase(0, 1);
        }

        return ans.empty() ? "0" : ans;
    }
};
