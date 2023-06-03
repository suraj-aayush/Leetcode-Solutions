class Solution {
public:
    struct compareNums {
        inline bool operator() (const int& n1, const int& n2) {
            int n1Bits = __builtin_popcount(n1), n2Bits = __builtin_popcount(n2);
            return (n1Bits == n2Bits ? n1 < n2 : n1Bits < n2Bits);
        }
    };
    vector<int> sortByBits(vector<int>& arr) {
        std::sort(arr.begin(), arr.end(), compareNums());
        return arr;
    }
};
